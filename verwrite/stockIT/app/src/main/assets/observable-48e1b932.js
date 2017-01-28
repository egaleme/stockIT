
/* ----- Observable ------

	Message API:

	set(value[, origin]) - Set a single value (at index 0)
	newAt(index, value, oldValue) - New value at the given index
	newAll(array) - Assume all values dirty. Array length must be != 1 (use set() for length == 1)
	clear([origin]) - Removes all items
	add(value) - Add to end of list
	removeAt(index, object) - Remove object at index
	removeRange(index, count, removed) - Remove range of values
	insertAt(index, value) - Insert value at index
	insertAll(index, array) - Insert values at index
*/

/*
	Creates a new observable.
	Syntax: Observable([initial value(s)])
*/
var Observable = function()
{
	var obs = Object.create(Observable.prototype);

	obs._subscribers = [];

	if ((arguments.length === 1) && (arguments[0] instanceof Function))
	{
		obs._initFuncObservable(arguments[0]);
	}
	else
	{
		obs._isLeaf = true;
		obs._values = Array.prototype.slice.call(arguments);
		if (!obs._values) { obs._values = []; }
	}

	return obs;
};

var Subject = function()
{
	var obs = Observable();
	obs._isLeaf = false;
	return obs;
};

function Identity(x)
{
	return x;
}

function Observe()
{
	var callback = arguments[arguments.length-1];
	if (!(callback instanceof Function)) {
		throw new Error("Last argument to Observe() must be a function");
	}

	var sources = Array.prototype.slice.call(arguments, 0, arguments.length-1);

	for (var i = 0; i < sources.length; i++) {
		if (!(sources[i] instanceof Observable)) {
			throw new Error("All (except the last) arguments to Observe() must be of type Observable");
		}
	}

	return ObserveList(sources, callback);
}

function ObserveList(sources, callback, endSubscriptionCallback)
{
	var res = Subject();

	var callbackProxy = function(src, op, p1, p2, p3)
	{
		callback.call(res, src, op, p1, p2, p3);
	};

	res.beginSubscriptions = function()
	{
		for (var i = 0; i < sources.length; i++)
		{
			sources[i].addSubscriber(callbackProxy);
		}
	};

	res.endSubscriptions = function()
	{
		for (var i = 0; i < sources.length; i++)
		{
			sources[i].removeSubscriber(callbackProxy);
		}
		if (endSubscriptionCallback)
		{
			endSubscriptionCallback();
		}
	};

	return res;
}


Observable.prototype._initFuncObservable = function(func)
{
	var obs = this;
	obs._values = [];
	obs._func = arguments[0];
	obs._dependencies = [];

	var obsFunc = arguments[0];

	var evaluating = false;

	var depChanged = function()
	{
		if (!evaluating)
		{
			obs.value = evaluate();
		}
	};

	var evaluate = function()
	{
		evaluating = true;
		var oldDependencies = obs._dependencies;
		var newDependencies = [];
		obs._dependencies = newDependencies;

		_dependencyStack.push(obs);

		var res;
		try
		{
			res = obsFunc.apply(obs);
		}
		finally
		{
			_dependencyStack.pop(obs);
		}

		oldDependencies.forEach(function(x) {
			var i = newDependencies.indexOf(x);
			if (i === -1) {
				x.removeSubscriber(depChanged);
			}
		});

		newDependencies.forEach(function(x) {
			var i = oldDependencies.indexOf(x);
			if (i === -1) {
				x.addSubscriber(depChanged);
			}
		});

		// Call again to get clean values
		res = obsFunc.apply(obs);

		evaluating = false;

		return res;
	};


	obs.beginSubscriptions = function()
	{
		depChanged();
	};

	obs.endSubscriptions = function()
	{
		obs._dependencies.forEach(function (x) {
			x.removeSubscriber(depChanged);
		});
	};
};

var _dependencyStack = [];

Observable.prototype.depend = function()
{
	if (_dependencyStack.length === 0) return;
	var current = _dependencyStack[_dependencyStack.length-1];
	if (current === this) return;

	var i = current._dependencies.indexOf(this);
	if (i === -1)
	{
		current._dependencies.push(this);
	}
};

Observable.prototype._assertNoDependence = function(x)
{
	if (_dependencyStack.length === 0) return;

	throw new Error("Observable(): cannot create new observables while evaluating dependency function :" + x);
};

Observable.prototype.onValueChanged = function(module, callback)
{
	if (!callback)
	{
		// Support old syntax where module is not provided
		callback = module;
		module = null;
	}

	var self = this;

	var subscriber = function(obs, cmd, value) { 
		if (cmd === "set")
		{
			callback(value); 	
		}
		else if (cmd === "newAll")
		{
			callback(obs.value);
		}
	};

	this.addSubscriber(subscriber);

	if (module !== null)
	{
		if ("disposed" in module)
		{
			module.disposed.push(function() {
				self.removeSubscriber(subscriber);
			});
		}
		else
		{
			throw new Error("First argument to Observable.onValueChanged must be a module");
		}
	}
};

Observable.prototype.subscribe = function(module) {
		
	if ((!module) || (!("disposed" in module))) { 
		throw new Error("Observable.subscribe(module): must provide a module argument"); 
	}

	var self = this;
	
	function subscriber() {}
	self.addSubscriber(subscriber);
	
	module.disposed.push(function() {
		self.removeSubscriber(subscriber);
	});
};

Observable.prototype.toArray = function()
{
	this.depend();
	return this._values.slice();
};


function combineGetSources(self, args)
{
	if (args.length < 1) {
		throw new Error("Observable.combine*() must have at least one argument");
	}
	var src = (args[0] instanceof Array) ? args[0] : Array.prototype.slice.call(args, 0, args.length-1);
	src.unshift(self);
	return src;
}

Observable.prototype.combine = function() 
{
	var sources = combineGetSources(this, arguments);
	var mapFunc = arguments[arguments.length-1];

	var res = ObserveList(sources, function() {
		var values = [];
		for (var i = 0; i < sources.length; i++) {
			values.push(sources[i].value);
		}
		var res = mapFunc.apply(res, values);
		if (typeof res != 'undefined') this.value = res;
	});
	return res;
};

Observable.prototype.combineLatest = function() 
{
	var sources = combineGetSources(this, arguments);
	var mapFunc = arguments[arguments.length-1];

	var res = ObserveList(sources, function() {
		var values = [];
		for (var i = 0; i < sources.length; i++) {
			if (sources[i].length === 0) { return; }
			values.push(sources[i].value);
		}
		var res = mapFunc.apply(res, values);
		if (typeof res != 'undefined') this.value = res;
	});
	return res;
};

Observable.prototype.combineArrays = function(sources, mapFunc) 
{
	var sources = combineGetSources(this, arguments);
	var mapFunc = arguments[arguments.length-1];
	
	var res = ObserveList(sources, function() {
		var values = [];
		for (var i = 0; i < sources.length; i++) {
			values.push(sources[i]._values);
		}

		var arr = mapFunc.apply(res, values);
		if (arr instanceof Array) {
			this.replaceAll(arr);
		}
	});
	return res;
};


Observable.prototype.addSubscriber = function(s, supressCallback)
{
	var self = this;

	this._subscribers.push(s);

	var send = (!supressCallback) && this._isLeaf;

	if (this._subscribers.length === 1)
	{
		this.beginSubscriptions();
	}
	else send = true;

	if (send)
	{
		if (this._values.length === 1)
		{
			messageQueue.push(function() { s(self, "set", self._values[0]); });
		}
		else if (this._values.length === 0)
		{
			messageQueue.push(function() { s(self, "clear"); });
		}
		else
		{
			messageQueue.push(function() { s(self, "newAll", self._values.slice(0)); });
		}
		PumpMessages();
	}
};

Observable.prototype.removeSubscriber = function(s)
{
	var i = this._subscribers.indexOf(s);
	this._subscribers.splice(i, 1);

	if (this._subscribers.length === 0)
	{
		this.endSubscriptions();
	}
};

/*
	Protected.
	When overridden in a derived observer type, this creates subscriptions with
	all observed sources.
*/
Observable.prototype.beginSubscriptions = function() {};

/*
	Protected.
	When overridden in a derived observer type, this removes subscriptions with
	all observed sources.
*/
Observable.prototype.endSubscriptions = function() {};

/*
	Gets the value at a specific index.
	Syntax: observable.getAt(index)
*/
Observable.prototype.getAt = function(index)
{
	this.depend();
	return this._values[index];
};

/*
	Replaces the value at a specific index.
	Syntax: observable.replaceAt(index, value);
*/
Observable.prototype.replaceAt = function(index, value)
{
	if (index < 0 || index >= this._values.length)
		throw new Error("replaceAt(" + index + ") index out-of-bounds: length=" + this._values.length);
	var oldValue = this._values[index];
	this._values[index] = value;
	this._queueMessage(this, "newAt", index, value, oldValue);
};

/*
	Inserts a value at a specific index.
	Syntax: observable.insertAt(index, value);
*/
Observable.prototype.insertAt = function(index, value)
{
	if (index == this._values.length)
	{
		this.add(value);
	}
	else
	{
		this._values.splice(index, 0, value);
		this._queueMessage(this, "insertAt", index, value);
	}
};

Observable.prototype.failed = function(message)
{
	this._queueMessage(this, "failed", message);
};

Observable.prototype.replaceAll = function(newValues)
{
	if (newValues instanceof Observable)
	{
		newValues = newValues._values;
	}

	if (!(newValues instanceof Array))
	{
		throw new Error("replaceAll(): argument must be an array");
	}

	if (!newValues)
	{
		newValues = [];
	}

	this._values = newValues.slice();

	if (this._values.length === 1)
	{
		this._queueMessage(this, "set", this._values[0]);
	}
	else if (this._values.length === 0)
	{
		this._queueMessage(this, "clear");
	}
	else
	{
		this._queueMessage(this, "newAll", this._values.slice(0));
	}
};

Observable.prototype.refreshAll = function(newValues, comparefunc, updateFunc, mapFunc)
{
	if (newValues instanceof Observable)
	{
		newValues = newValues._values;
	}

	if (!(newValues instanceof Array))
	{
		throw new Error("refreshAll(): argument must be an array or observable");
	}

	if (!newValues)
	{
		newValues = [];
	}

	if (comparefunc === undefined)
		comparefunc = function(x, y) { return x === y; };

	for (var i = 0; i < Math.min(newValues.length, this._values.length); i++)
	{
		var a = this._values[i];
		var b = newValues[i];

		if (!comparefunc(a, b))
		{
			if (mapFunc !== undefined)
				this.replaceAt(i, mapFunc(b));
			else
				this.replaceAt(i, b);
		}
		else
		{
			if (updateFunc !== undefined)
				updateFunc(a, b);
		}
	}

	for (var i = this._values.length; i < newValues.length; i++)
	{
		if (mapFunc !== undefined)
			this.add(mapFunc(newValues[i]));
		else
			this.add(newValues[i]);
	}

	if (newValues.length < this._values.length)
		this.removeRange(newValues.length, this._values.length - newValues.length);
};

Observable.prototype.add = function(x)
{
	this._values.push(x);
	this._queueMessage(this, "add", x);
};

Observable.prototype.insertAll = function(index, array)
{
	this._values = 
		this._values.slice(0, index)
		.concat(array)
		.concat(this._values.slice(index));
	this._queueMessage(this, "insertAll", index, array);
};

Observable.prototype.addAll = function(array)
{
	this.insertAll(this._values.length, array);
}

Observable.prototype.remove = function(x)
{
	if (!this.tryRemove(x))
		throw new Error("Observable.remove(): item not found");
};

Observable.prototype.tryRemove = function(x)
{
	var i = this._values.indexOf(x);
	if (i != -1)
	{
		var item = this._values[i];
		this._values.splice(i, 1);
		this._queueMessage(this, "removeAt", i, item);
		return true;
	}
	else
	{
		return false;
	}
};

Observable.prototype.removeWhere = function(f)
{
	var count = 0;
	for (var i = 0; i < this._values.length; i++)
	{
		var x = this.getAt(i);
		if (f(x))
		{
			this.removeAt(i--);
			count++;
		}
	}
	return count;
};

Observable.prototype.removeAt = function(index)
{
	if (index < 0 || index >= this._values.length)
	{
		throw new Error("removeAt(" + index + ") index out-of-bounds: length=" + this._values.length)
	}
	var obj = this._values[index];
	this._values.splice(index, 1);
	this._queueMessage(this, "removeAt", index, obj);
};

Observable.prototype.removeRange = function(index, count)
{
	var removed = this._values.slice(index, index+count);
	this._values.splice(index, count);
	this._queueMessage(this, "removeRange", index, count, removed);
};

Observable.prototype.clear = function(origin)
{
	this._values = [];
	this._queueMessage(this, "clear", origin);
};

/*
	Executes a function on all the current values.
*/
Observable.prototype.forEach = function(f)
{
	this.depend();
	for (var i = 0; i < this._values.length; i++)
	{
		f(this._values[i], i);
	}
};

Observable.prototype.indexOf = function(x)
{
	this.depend();
	return this._values.indexOf(x);
};

Observable.prototype.contains = function(x)
{
	this.depend();
	return this._values.indexOf(x) !== -1;
};


/*
	Returns the number of values in the observable.
*/
Object.defineProperty(Observable.prototype, "length",
{
	get: function()
	{
		this.depend();
		return this._values.length;
	}
});

Observable.prototype.setValueExclusive = function(value, exclude) {
	this._values = [value];
	this._queueMessageExclusive([this, "set", value], exclude);	
};

Observable.prototype.setValueWithOrigin = function(value, origin)
{
	this._values = [value];
	this._queueMessage(this, "set", value, origin);
};

Observable.prototype.replaceAllWithOrigin = function(values, origin)
{
	this._values = values;
	this._queueMessage(this, "newAll", values, origin);
}

/*
	Gets or sets the (first) value of the observable.
	This property is mainly for use with for sigle-valued observables.
	If the observable contains multiple values, this property only
	gets or sets the first value.
*/
Object.defineProperty(Observable.prototype, "value",
{
	get : function()
	{
		this.depend();
		if (this._values.length === 0) { return undefined; }
		else { return this._values[0]; }
	},
	set : function(x)
	{
		this._values = [x];
		this._queueMessage(this, "set", x);
	}
});


/*
	Returns an observable that will only propagate values that pass the given
	criteria, otherwise it retains it's previous value.

	This method only considers the first (single) value of an observable.
*/
Observable.prototype.filter = function(f)
{
	this._assertNoDependence("filter");

	if (!f) f = Identity;

	return Observe(this, function(src)
	{
		if (f(src.value)) this.value = src.value;
	});
};

Observable.prototype.toString = function()
{
	this.depend();
	if (this._values) { return "(observable) " + this._values.toString(); }
	else return "(no value)";
};

// A list of functions to be processed in order
var messageQueue = [];
var pumping = false;
function PumpMessages()
{
	if (pumping) return;
	try
	{
		pumping = true;
		while (messageQueue.length > 0)
		{
			var msg = messageQueue.shift();
			msg();
		}
	}
	finally
	{
		pumping = false;
	}
}

function PostMessage(s, args)
{
	messageQueue.push(function() {
		var obs = args[0];
		if (obs._subscribers.indexOf(s) !== -1) {
			s.apply(null, args);
		}
	});
}

Observable.prototype._queueMessage = function() 
{
	var args = Array.prototype.slice.call(arguments);
	this._queueMessageExclusive(args);
};

Observable.prototype._queueMessageExclusive = function(args, exclude) 
{
	for (var i = 0; i < this._subscribers.length; i++) {
		var sub = this._subscribers[i];
		if (sub !== exclude) {
			PostMessage(sub, args);
		}
	}

	PumpMessages();
};



/* --- operators --- */

Observable.prototype.map = function(f, unmap)
{
	// more than one argument? -> needs indices
	var needsIndex = f.length > 1; 

	function unmapAll() {
		if (unmap) { for (var i = 0; i < this.length; i++) { unmap(this._values[i]); } }
	}

	this._assertNoDependence("map");

	return ObserveList([this], function(src, op, p1, p2)
	{
		if (op === "set")
		{
			if (unmap && this._values.length > 0) { unmap(this.value); }
			this.value = f(p1, 0);
		}
		else if (op === "clear")
		{
			unmapAll();
			this.clear();
		}
		else if (op === "add")
		{
			this.add(f(p1, this.length));
		}
		else if (op === "newAt")
		{
			if (unmap) { unmap(this._values[p1]); }
			this.replaceAt(p1, f(p2, p1));
		}
		else if (op === "failed")
		{
			this.failed(p1);
		}
		else if (!needsIndex && op === "insertAt")
		{
			this.insertAt(p1, f(p2));
		}
		else if (!needsIndex && op === "removeAt")
		{
			if (unmap) { unmap(this._values[p1]); }
			this.removeAt(p1);
		}
		else if (!needsIndex && op === "insertAll")
		{
			var index = p1;
			var values = p2;

			var res = new Array(values.length);
			for (var i = 0; i < values.length; i++)
			{
				res[i] = f(values[i]);
			}
			this.insertAll(index, res);
		}
		else if (!needsIndex && op === "removeRange")
		{
			if (unmap) { for (var i = p1; i < p1+p2; i++) { unmap(this._values[i]);} }
			this.removeRange(p1, p2)
		}
		else
		{
			// Fallback - assume all is dirty
			// The insert/remove and refresh cases are handled here when indices are needed
			unmapAll();

			var r = [];
			for (var i = 0; i < src.length; ++i)
			{
				r.push(f(src.getAt(i), i));
			}
			this.replaceAll(r);
		}
	}, unmapAll);
};

function Identity(x) { return x; }

Observable.prototype.identity = function() {
	return this.map(Identity);
};

Observable.prototype.pick = function(field) {
	return this.map(function(x) { return x[field]; });
};

Observable.prototype.flatMap = function(mapFunc) {
	return this.map(mapFunc).inner();
}

Observable.prototype.notNull = function() {
	return this.where(function(x) { return x; } );
};

Observable.prototype.parseJson = function()
{
	return this.map(JSON.parse);
};

Observable.prototype.stringifyJson = function() 
{
	return this.map(JSON.stringify);
};

Observable.prototype.expand = function(f)
{
	this._assertNoDependence("expand");

	var self = this;
	return Observe(self, function () {

		if (self.length > 1)
			throw new Error("expand(): can only be used on a single value");

		var r = self.value;

		if (r === undefined)
			this.replaceAll([]);

		if (!(r instanceof Array))
			throw new Error("expand(): source value must be an array");

		this.replaceAll(r);
	});
};

/*  Transforms an object to a filter function that checks if the
	given fields are present and match the given value. */
function ObjectToFilter(obj)
{
	return function(x) {
		for (var p in obj) {
			if (!x.hasOwnProperty(p)) { return false; }
			if (x[p] !== obj[p]) { return false;}
		}
		return true;
	}
}

Observable.prototype.where = function(criteria, index)
{
	this._assertNoDependence("where");

	if (!criteria) {
		return this.map(function(x) { return x; });
	}

	if ((!(criteria instanceof Function)) && (criteria instanceof Object)) {
		criteria = ObjectToFilter(criteria);
	}

	
	var self = this.map(function(x) {
		var item = {
			condition: criteria(x),
			unsub: null,
			value: x
		}

		var cond = criteria(x);
		var unsub = null;

		if (cond instanceof Observable) {
			function condChanged() {
				if (item.condition && !cond.value) {
					res.removeAt(index);
				}
				if (!item.condition && cond.value) {
					res.insertAt(index, x);
				}
				item.condition = cond.value;
			}

			cond.addSubscriber(condChanged);
			unsub = function() {
				cond.removeSubscriber(condChanged);
			}
			item.condition = cond.value;
		}

		return item;
	}, /*unmap: */ function(x) {
		if (x.unsubscribe) { x.unsubscribe(); }
		x.unsubscribe = null;
	});

	function getResultIndex(selfIndex)
	{
		var c = 0;
		for (var i = 0; i < selfIndex; i++)
		{
			if (self.getAt(i).condition) { c++; }
		}
		return c;
	}

	var res = Observe(self, function(src, op, p1, p2, p3)
	{
		if (op === "set")
		{
			if (p1.condition)
			{
				this.value = p1.value;
			}
			else 
			{
				this.replaceAll([]);
			}
		}
		else if (op === "clear")
		{
			this.clear();
		}
		else if (op === "add")
		{
			if (p1.condition)
			{
				this.add(p1.value);
			}
		}
		else if (op === "removeAt")
		{
			if (p2.condition)
			{
				this.removeAt(getResultIndex(p1));
			}
		}
		else if (op === "insertAt")
		{
			if (p2.condition)
			{
				this.insertAt(getResultIndex(p1), p2.value);
			}
		}
		else if (op === "newAt")
		{
			var index = p1;
			var oldValue = p3;
			var newValue = p2;

			if (oldValue.condition)
			{
				if (newValue.condition)
				{
					this.replaceAt(index, newValue.value);
				}
				else
				{
					this.removeAt(index);
				}
			}
			else
			{
				if (newValue.condition)
				{
					this.insertAt(index, newValue.value);
				}
			}
		}
		else if (op === "insertAll")
		{
			var items = p2;
			var result = [];
			for (var i = 0; i < items.length; i++)
			{
				var item = items[i];
				if (item.condition)
				{
					result.push(item.value);
				}
			}

			if (result.length > 0)
			{
				this.insertAll(getResultIndex(p1), result);
			}
		}
		else if (op === "removeRange")
		{
			var index = getResultIndex(p1);

			var count = 0;
			for (var i = 0; i < p3.length; i++)
			{
				if (p3[i].condition) { count++; }
			}

			if (count > 0)
			{
				this.removeRange(index, count);	
			}
		}
		else if (op === "failed")
		{
			this.failed(p1);
		}
		else if (op === "newAll")
		{
			var r = [];

			self.forEach(function(x) {
				if (x.condition) {
					r.push(x.value);
				}
			});

			this.replaceAll(r);
		}
		else
		{
			throw new Error("Unhandled operation in where(): " + op);
		}
	});

	return res;
};


Observable.prototype.count = function(criteria)
{
	this._assertNoDependence("count");

	if (criteria) {
		return this.where(criteria).count();
	}

	return Observe(this, function(src) {
		this.value = src.length;
	});
};

Observable.prototype.any = function(f) {
	return this.count(f).map(function(x) { return x > 0; } );
}

Observable.prototype.first = function(f) {
	return this.where(f).slice(0, 1);
}

Observable.prototype.last = function(f) {
	return this.where(f).slice(-1);
}


Observable.prototype.inner = function()
{
	this._assertNoDependence("inner");

	var self = this;
	var res = Subject();
	var sub = null;

	var innerChanged = function(src, op, p1, p2)
	{
		res.replaceAll(src);
	};

	var selfChanged = function(src)
	{
		if (sub instanceof Observable)
		{
			sub.removeSubscriber(innerChanged);
		}
		sub = src.value;
		if (sub instanceof Observable)
		{
			sub.addSubscriber(innerChanged);
		}
		else if (sub instanceof Array)
		{
			res.replaceAll(sub);
		}
		else if (sub === null || sub === undefined)
		{
			res.clear();
		}
		else
		{
			res.value = sub;
		}
	};

	res.setInnerValue = function(value) {
		if (self.value instanceof Observable) {
			self.value.setValueExclusive(value, innerChanged);
		}
	}

	res.twoWayMap = function(f, g) {
		var self = this;
		var m = self.map(f);

		var oldBegin = m.beginSubscriptions;
		var oldEnd = m.endSubscriptions;

		var mChanged = function() {
			if (m.length > 0) {
				self.setInnerValue(g(m.value, self.value));
			}
		};

		m.beginSubscriptions = function() {
			oldBegin.call(m);
			m.addSubscriber(mChanged);
		};

		m.endSubscriptions = function() {
			oldEnd.call(m);
			m.removeSubscriber(mChanged);
		};

		return m;
	}

	res.beginSubscriptions = function()
	{
		self.addSubscriber(selfChanged);
	};

	res.endSubscriptions = function()
	{
		self.removeSubscriber(selfChanged);
		if (sub instanceof Observable)
		{
			sub.removeSubscriber(innerChanged);
		}
		sub = null;
	};

	return res;
};

Observable.prototype.not = function()
{
	return this.map(function (x) { return !x; });
};

/**
	Returns a new observable of a portion of another observable.
*/
Observable.prototype.slice = function(begin, end)
{
	return Observe(this, function(src) {
		this.replaceAll(src._values.slice(begin, end));
	})
};

module.exports = Observable;
