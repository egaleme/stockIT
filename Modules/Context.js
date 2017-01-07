var Observable = require('FuseJS/Observable')
var API_URL = require('./api')

var products = Observable()
var totalAmount = Observable()
var total = Observable(0)
var user = Observable()
var item = Observable()
var accessToken = Observable()
var store = Observable()

function expireTracker(datestring) {
    var color
	var today = new Date()
	var expiringdate = checkExpiringDateFormat(datestring)

	if (expiringdate != null) {
	if (today > expiringdate) {

    color = "#fc423e"

	} else {
    var diff = expiringdate.getTime() - today.getTime()
    diff = Math.floor(diff/(1000*60*60*24))
    if (diff <= 30) {
      color = "#fcb370"

    }else {
      color = "#b2ccf8"
    }
  }


	} else {
    color = "#b2ccf8"

	}
  return color
}

	function checkExpiringDateFormat(datestring) {
	var result = datestring.match(/\d/)
	if (result !=null) {
		return new Date(datestring)
	}
	return null

}


function getProducts() {
  total.value = 0
 fetch(API_URL+'/products?access_token='+accessToken.value, {
  method: 'get'
}).
  then(function (response) {
    return response.json()
  }).
  then(function(data) {
    store.replaceAll(data.data)
    for (var i = 0; i < data.data.length; i++) {
       total.value = (total.value + (data.data[i].price * data.data[i].quantity))
       
     }
       totalAmount.value = " Total Current Stock: =N= "+ total.value.toFixed(2)
       store.forEach(function(product) {     
       product.expireTracker = Observable()
       product.bb = Observable()
       product.bb.value = "BB : "+ product.expiringdate
       product.expireTracker.value = expireTracker(product.expiringdate)
       products.add(product)
     })
     }).
       catch(function(error) {
        console.log('can not load products')
     })

}

function renderDateString(datestring) {
		var result = datestring.match(/\d/)
		if (result != null) {
			return new Date(datestring).toDateString()
		}
		return datestring
}


function createProduct (name, batchno, qty, expiringdate, price) {
  total.value = 0
  var productbb = "BB : "+ renderDateString(expiringdate)
	products.add({name: name, price: price, bb: productbb, quantity: qty, batchno: batchno, user_id: user.value, expiringdate: renderDateString(expiringdate), expireTracker: expireTracker(expiringdate)})

      fetch(`${API_URL}/products?access_token=${accessToken.value}`, {
        method: 'post',
        mode: 'cors',
        credentials: 'same-origin',
        headers: new Headers({'Content-Type': 'application/json'}),
        body: JSON.stringify({name: name, batchno: batchno, expiringdate: renderDateString(expiringdate), price: price, quantity: qty})
      }).
      then(function(response) {
        if (response.ok) {
          return response.json()
        } else {

          throw new Error("Error adding products.Please make sure all fields are filled")
        }
      }).

      catch(function(error) {
        console.log('couldnt save product');

      })

  products.forEach(function(product) {
    total.value = (total.value + (product.price * product.quantity))
   
  })
  totalAmount.value = " Total Current Stock Value: =N= "+ total.value.toFixed(2)

}

function updateProduct(id, name, batchno, quantity, expiringdate, price, owner) {
  total.value = 0
  for (var i = 0; i < products.length; i++) {
        var product = products.getAt(i);
        if (product.id == id) {
            product.name = name;
            product.batchno = batchno;
            product.quantity= quantity;
            product.expiringdate = renderDateString(expiringdate);
            product.price = price;
            product.user_id = owner;
            product.bb = "BB : "+ product.expiringdate
            product.expireTracker = expireTracker(expiringdate);
            products.replaceAt(i, product);
            break;
        }
    }

      fetch(`${API_URL}/products/${id}?access_token=${accessToken.value}`, {
        method: 'put',
        mode: 'cors',
        credentials: 'same-origin',
        headers: new Headers({'Content-Type': 'application/json'}),
        body: JSON.stringify({name: name, batchno: batchno, expiringdate: renderDateString(expiringdate), price: price, quantity: quantity})
      }).
      then(function(response) {
        if (response.ok) {
          return response.json()
        } else {

          throw new Error("Error adding products.Please make sure all fields are filled")
        }
      }).

      catch(function(error) {
        console.log('could not update product');

      })

  products.forEach(function(product) {
    total.value = (total.value + (product.price * product.quantity))
   
  })
  totalAmount.value = " Total Current Stock Value: =N= "+ total.value.toFixed(2)

}

function deleteProduct(product) {
  total.value = 0
  products.remove(product)
  products.forEach(function(product) {
    total.value = (total.value + (product.price * product.quantity))
   
  })
  totalAmount.value = " Total Current Stock Value: =N= "+ total.value.toFixed(2)

  return fetch(API_URL+'/products/'+product.id+'?access_token='+accessToken.value, {
    method: 'delete',
    mode: 'cors',
    credentials: 'same-origin'
  })

}

function logout() {
	return fetch(API_URL+'/access_tokens?access_token='+accessToken.value, {
		method: 'delete',
		mode: 'cors',
		credentials: 'same-origin'
	})

}

function login(username, password) {
 return fetch(API_URL+'/access_tokens', {
    method: 'post',
    mode: 'cors',
    credentials: 'same-origin',
    headers: new Headers({'Content-Type': 'application/json'}),
    body: JSON.stringify({username: username, password: password, grant_type: "password"})
  })

}

module.exports = {
	products: products,
	logout: logout,
	createProduct: createProduct,
	login: login,
	totalAmount: totalAmount,
  getProducts: getProducts,
  updateProduct: updateProduct,
  user: user,
  item: item,
  deleteProduct: deleteProduct,
  total: total,
  accessToken: accessToken
  

}
