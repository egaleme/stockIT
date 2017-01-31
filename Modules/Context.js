var Observable = require('FuseJS/Observable')
var Storage = require("FuseJS/Storage")
var API_URL = require('./api')

var products = Observable()
var totalAmount = Observable()
var total = Observable(0)
var user = Observable()
var item = Observable()
var accessToken = Observable()
var store = Observable()
var error = Observable()
var isLoggedIn = Observable(false)

var SAVENAME = "localStorage.json";
var STOREDATA = "storeStorage.json";
var ERRORDATA = "errorStorage.json";



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


function getProducts(task, accessToken) {
  total.value = 0
 fetch(API_URL+'/products?access_token='+accessToken, {
  method: 'get'
}).
  then(function (response) {
    if (response.ok) {
        task.done();
          return response.json()
        }
  }).
  then(function(data) {
  var storeObject = {store: data.data};
    Storage.write(STOREDATA, JSON.stringify(storeObject));
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



function createProduct ( name, batchno, qty, expiringdate, price) {
  
  var productid = (Math.floor(Math.random() * 100000) + products.length);

  total.value = 0
  var productbb = "BB : "+ renderDateString(expiringdate)
  
	products.add({productid: productid, name: name, price: price, bb: productbb, quantity: qty, batchno: batchno, expiringdate: renderDateString(expiringdate), expireTracker: expireTracker(expiringdate)})

      fetch(`${API_URL}/products?access_token=${accessToken.value}`, {
        method: 'post',
        mode: 'cors',
        credentials: 'same-origin',
        headers: new Headers({'Content-Type': 'application/json'}),
        body: JSON.stringify({productid: productid, name: name, batchno: batchno, expiringdate: renderDateString(expiringdate), price: price, quantity: qty})
      }).
      then(function(response) {
        if (response.ok) {
          return response.json()
        } else {

          throw new Error("Error adding products.Please make sure all fields are filled")
        }
      }).
      then(function(data) {
        total.value = 0;
       /* products.replaceAt(products.length-1, {id: data.data[0].id, name: name, price: price, bb: productbb, quantity: qty, batchno: batchno, expiringdate: renderDateString(expiringdate), expireTracker: expireTracker(expiringdate)});
        
       var storeArray =[];
        products.forEach(function(product) {
          storeArray.push(product);
        });
        var storeObject = {store: storeArray};
        Storage.write(STOREDATA, JSON.stringify(storeObject));
      */
      }).
      catch(function(error) {
        console.log('couldnt save product');

      })
         var storeArray =[];
        products.forEach(function(product) {
          storeArray.push(product);
        });
        var storeObject = {store: storeArray};
        Storage.write(STOREDATA, JSON.stringify(storeObject));
         products.forEach(function(product) {
         total.value = (total.value + (product.price * product.quantity))
         totalAmount.value = " Total Current Stock Value: =N= "+ total.value.toFixed(2)
   
       })


}

function updateProduct(id, productid, name, batchno, quantity, expiringdate, price) {
  total.value = 0
  for (var i = 0; i < products.length; i++) {
        var product = products.getAt(i);
        if (product.productid == productid) {
            product.name = name;
            product.batchno = batchno;
            product.quantity= quantity;
            product.expiringdate = renderDateString(expiringdate);
            product.price = price;
            product.bb = "BB : "+ product.expiringdate
            product.expireTracker = expireTracker(expiringdate);
            products.replaceAt(i, product);
            break;
        }
    }

  var storeArray =[];
  products.forEach(function(product) {
    storeArray.push(product);
  });
  var storeObject = {store: storeArray};
  Storage.write(STOREDATA, JSON.stringify(storeObject));

      fetch(`${API_URL}/products/${productid}?access_token=${accessToken.value}`, {
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

   var storeArray =[];
  products.forEach(function(product) {
    storeArray.push(product);
  });
  var storeObject = {store: storeArray};
  Storage.write(STOREDATA, JSON.stringify(storeObject));  
  products.forEach(function(product) {
    total.value = (total.value + (product.price * product.quantity))
   
  })

  totalAmount.value = " Total Current Stock Value: =N= "+ total.value.toFixed(2)

  return fetch(`${API_URL}/products/${product.productid}?access_token=${accessToken.value}`, {
    method: 'delete',
    mode: 'cors',
    credentials: 'same-origin'
  })

}

function logout(accessToken) {
	 fetch(API_URL+'/access_tokens?access_token='+accessToken, {
		method: 'delete',
		mode: 'cors',
		credentials: 'same-origin'
	})

}

function login(username, password, task) {
 fetch(API_URL+'/access_tokens', {
    method: 'post',
    mode: 'cors',
    credentials: 'same-origin',
    headers: new Headers({'Content-Type': 'application/json'}),
    body: JSON.stringify({username: username, password: password, grant_type: "password"})
  }).
  then(function (response) {
    if (response.ok) {
        task.done();
         response.json().
  then(function(data) {
    accessToken.value = data.data[0].access_token;
    var tokenObject = {accessToken: data.data[0].access_token};
    var storeObject = {store: data.data[0].user.products};
    Storage.write(STOREDATA, JSON.stringify(storeObject));
    Storage.write(SAVENAME, JSON.stringify(tokenObject)).then(function(content) {
      if(content !== '') {
        isLoggedIn.value = true
      } 
    });
    store.replaceAll(data.data[0].user.products);
    for (var i = 0; i < data.data[0].user.products.length; i++) {
       total.value = (total.value + (data.data[0].user.products[i].price * data.data[0].user.products[i].quantity))
       
     }
       totalAmount.value = " Total Current Stock: =N= "+ total.value.toFixed(2)
       store.forEach(function(product) {     
       product.expireTracker = Observable()
       product.bb = Observable()
       product.bb.value = "BB : "+ product.expiringdate
       product.expireTracker.value = expireTracker(product.expiringdate)
       products.add(product)
     });
     });
     } else {
      isLoggedIn.value = false
     // error.value = "user not found"
     throw new Error("user not found")
     }
     
    }).
  catch(function(error) {
    
    console.log(error.message)
  })

}

function loadProducts() {
  total.value = 0;
  Storage.read(STOREDATA).then(function(content) {
      var data = JSON.parse(content)
    store.replaceAll(data.store);
    for (var i = 0; i < data.store.length; i++) {
       total.value = (total.value + (data.store[i].price * data.store[i].quantity))
       
     }
       totalAmount.value = " Total Current Stock: =N= "+ total.value.toFixed(2)
       store.forEach(function(product) {     
       product.expireTracker = Observable()
       product.bb = Observable()
       product.bb.value = "BB : "+ product.expiringdate
       product.expireTracker.value = expireTracker(product.expiringdate)
       products.add(product)
     })
    
   
  }, function(error) {
    console.log("can not load products")
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
  item: item,
  deleteProduct: deleteProduct,
  total: total,
  accessToken: accessToken,
  SAVENAME: SAVENAME,
  STOREDATA: STOREDATA,
  loadProducts: loadProducts,
  ERRORDATA, ERRORDATA,
  isLoggedIn: isLoggedIn,
  error: error

  

}
