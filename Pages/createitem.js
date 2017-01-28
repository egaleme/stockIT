var Context = require('Modules/Context')
var Observable = require('FuseJS/Observable')
var Storage = require('FuseJS/Storage')

var productName = Observable();
var batchNo = Observable();
var expiringDate = Observable();
var price = Observable();
var qty = Observable();
var errField = Observable();


function goBack() {
	 errField.value = '';
	 productName.value = '';
	  batchNo.value = '';
	  expiringDate.value = '';
	  price.value = '';
	  qty.value = '';
     router.goto("home")
}

function addItem() {

if (!productName.value || !batchNo.value || !qty.value || !expiringDate.value || !price.value) {
    errField.value = "please supply all fields"
    return;
  }	

 Context.createProduct( productName.value, batchNo.value, qty.value, expiringDate.value, price.value)
  errField.value = '';
  productName.value = '';
  batchNo.value = '';
  expiringDate.value = '';
  price.value = '';
  qty.value = '';
  router.goBack()
}



module.exports = {goBack, addItem, productName, batchNo, expiringDate, price, qty, errField}
