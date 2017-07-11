var Context = require('Modules/Context');
var Observable = require('FuseJS/Observable');
var Storage = require('FuseJS/Storage');

var id = Context.item.map(function(x) {
	return x.id
})
var productid = Context.item.map(function(x) {
	return x.productid
})
var name = Context.item.map(function(x) {
	return x.name
})
var batchno = Context.item.map(function(x) {
	return x.batchno
})
var expiringdate = Context.item.map(function(x) {
	return x.expiringdate
})
var quantity = Context.item.map(function(x) {
	return x.quantity
})
var price = Context.item.map(function(x) {
	return x.price
})


var prodChannel = Context.socket.channel("products:joined", {guardian_token: Context.accessToken.value});
prodChannel.on("product_updated", function(payload) {
	Context.updateProduct(payload.data.id, payload.data.productid, payload.data.name, payload.data.batchno, payload.data.quantity, payload.data.expiringdate, payload.data.price);
	//router.goBack();
})
prodChannel.join()
	.receive("ok", function(resp) {
		console.log("Joined products")
	})
	.receive("error", function(resp) {
		return console.log("Unable to join", resp)
	})

function updateProduct() {
	Context.updateProduct(id.value, productid.value, name.value, batchno.value, quantity.value, expiringdate.value, price.value)
	prodChannel.push("update_product", {productid: productid.value, product: {name: name.value, batchno: batchno.value, quantity: quantity.value, expiringdate: expiringdate.value, price: price.value}})
	router.goBack();
}

function goBack() {
	router.goBack()
}

module.exports = {
	goBack,
	updateProduct,
	id,
	productid,
	name,
	price,
	quantity,
	expiringdate,
	batchno

}