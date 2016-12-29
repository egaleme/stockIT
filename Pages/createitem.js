var Context = require('Modules/Context')
var Observable = require('FuseJS/Observable')

var productName = Observable();
var batchNo = Observable();
var expiringDate = Observable();
var price = Observable();
var qty = Observable();
var err = Observable();


function goBack() {
      router.goto("home")
 }
function addItem() {
	Context.createProduct(productName.value, batchNo.value, qty.value, expiringDate.value, price.value)
  productName.value = '';
  batchNo.value = '';
  expiringDate.value = '';
  price.value = '';
  qty.value = '';
  router.goBack()
}



module.exports = {goBack, addItem, productName, batchNo, expiringDate, price, qty}
