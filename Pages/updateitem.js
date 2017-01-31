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




function updateProduct() {

    	Context.updateProduct(id.value, productid.value, name.value, batchno.value, quantity.value, expiringdate.value, price.value)
   		router.goBack()	
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