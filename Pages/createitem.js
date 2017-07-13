var Context = require('Modules/Context')
var Observable = require('FuseJS/Observable')

var productName = Observable();
var batchNo = Observable();
var expiringDate = Observable();
var price = Observable();
var qty = Observable();
var errField = Observable();


var prodChannel = Context.socket.channel("products:joined", {guardian_token: Context.accessToken.value});
prodChannel.on("product_added", function(payload) {
  Context.updateProduct(payload.data.id, payload.data.productid, payload.data.name, payload.data.batchno, payload.data.quantity, payload.data.expiringdate, payload.data.price)
   router.goBack()
})
prodChannel.join()
  .receive("ok", function(resp) {
    console.log("Joined products")
  })
  .receive("error", function(resp) {
    return console.log("Unable to join", resp)
  })

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
var productid = (Math.floor(Math.random() * 5000000) + Context.products.length);
Context.createProduct(productid, productName.value, batchNo.value, qty.value, expiringDate.value, price.value)
prodChannel.push("add_product", {product: {productid: productid, name: productName.value, batchno: batchNo.value, quantity: qty.value, expiringdate: expiringDate.value, price: price.value}})
 
  errField.value = '';
  productName.value = '';
  batchNo.value = '';
  expiringDate.value = '';
  price.value = '';
  qty.value = '';
 
}



module.exports = {goBack, addItem, productName, batchNo, expiringDate, price, qty, errField}
