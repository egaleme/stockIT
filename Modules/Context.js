var Observable = require('FuseJS/Observable');
var Storage = require("FuseJS/Storage");
var API_URL = require('./api');
var Phoenix = require("Lib/phoenix-common");

var products = Observable();
var totalAmount = Observable();
var total = Observable(0);
var user = Observable();
var item = Observable();
var accessToken = Observable();
var store = Observable();
var error = Observable();
var isLoggedIn = Observable(false);

var socket = new Phoenix.Socket("ws://localhost:4000/socket");

socket.connect();


//var db = sqlite.open(storeData.sqlite);

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


function getProducts(data) {
  totalAmount.value = 0;
//  products.clear();
  total.value = 0;
  
    var storeObject = {store: data};
    Storage.write(STOREDATA, JSON.stringify(storeObject));

    store.replaceAll(data)
    for (var i = 0; i < data.length; i++) {
       total.value = (total.value + (data[i].price * data[i].quantity))

     }
      products.clear();
       totalAmount.value = " Total Inventory Value: =N= "+ total.value.toFixed(2)
       store.forEach(function(product) {
       product.expireTracker = Observable()
       product.bb = Observable()
       product.bb.value = "BB : "+ product.expiringdate
       product.expireTracker.value = expireTracker(product.expiringdate)
       products.add(product)
     });

}

function renderDateString(datestring) {
		var result = datestring.match(/\d/)
		if (result != null) {
			return new Date(datestring).toDateString()
		}
		return datestring
}



function createProduct (productid,  name, batchno, quantity, expiringdate, price) {

  
  total.value = 0
  var productbb = "BB : "+ renderDateString(expiringdate)

	products.add({productid: productid, name: name, price: price, bb: productbb, quantity: quantity, batchno: batchno, expiringdate: renderDateString(expiringdate), expireTracker: expireTracker(expiringdate)})

         var storeArray =[];
         products.forEach(function(product) {
          storeArray.push(product);
        });
        var storeObject = {store: storeArray};
        Storage.write(STOREDATA, JSON.stringify(storeObject));
       
         products.forEach(function(product) {
         total.value = (total.value + (product.price * product.quantity))
         totalAmount.value = " Total Inventory Value: =N= "+ total.value.toFixed(2)

       })
}

function updateProduct(id, productid, name, batchno, quantity, expiringdate, price) {
  total.value = 0
  for (var i = 0; i < products.length; i++) {
        var product = products.getAt(i);
        if (product.productid == productid) {
            product.id = id;
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

  products.forEach(function(product) {
    total.value = (total.value + (product.price * product.quantity))

  })
  totalAmount.value = " Total Inventory Value: =N= "+ total.value.toFixed(2)

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

  totalAmount.value = " Total Inventory Value: =N= "+ total.value.toFixed(2)

}


function initialProducts(data) {
  products.clear();
  total.value = 0;
  totalAmount.value = 0;

 //debug_log(JSON.stringify(data))
    var storeObject = {store: data};
    Storage.write(STOREDATA, JSON.stringify(storeObject));
    store.replaceAll(data);
    for (var i = 0; i < data.length; i++) {
       total.value = (total.value + (data[i].price * data[i].quantity))

     }
       totalAmount.value = " Total Inventory Value: =N= "+ total.value.toFixed(2)
       store.forEach(function(product) {
       product.expireTracker = Observable()
       product.bb = Observable()
       product.bb.value = "BB : "+ product.expiringdate
       product.expireTracker.value = expireTracker(product.expiringdate)
       products.add(product)
     });

}

function loadMore(data) {
  totalAmount.clear()
  total.value = 0

       data.forEach(function(product) {
       product.expireTracker = Observable()
       product.bb = Observable()
       product.bb.value = "BB : "+ product.expiringdate
       product.expireTracker.value = expireTracker(product.expiringdate)
       products.add(product)
      
     });

  
      var productsArray = [];
       products.forEach(function(product) {
       total.value = (total.value + (product.price * product.quantity))
       totalAmount.value = " Total Inventory Value: =N= "+ total.value.toFixed(2)
       productsArray.push(product)
       });

       var storeObject = {store: productsArray};
       Storage.write(STOREDATA, JSON.stringify(storeObject));
}


function loadProducts() {

  total.value = 0;
  Storage.read(STOREDATA).then(function(content) {
      var data = JSON.parse(content)
    store.replaceAll(data.store);
    for (var i = 0; i < data.store.length; i++) {
       total.value = (total.value + (data.store[i].price * data.store[i].quantity))

     }
       totalAmount.value = " Total Inventory Value: =N= "+ total.value.toFixed(2)
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
	createProduct: createProduct,
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
  error: error,
  loadMore: loadMore,
  initialProducts: initialProducts,
  socket: socket

}
