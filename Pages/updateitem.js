var Context = require('Modules/Context')
var Observable = require('FuseJS/Observable')

var id = Context.item.map(function(x) {
	return x.id
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

var owner = Context.item.map(function(x) {
	return x.owner
})


function updateProduct() {
	if (Context.user.value === owner.value) {
		Context.updateProduct(id.value, name.value, batchno.value, quantity.value, expiringdate.value, price.value, owner.value)
		
		router.goBack()
	}
	
}

function goBack() {
	router.goBack()
}

module.exports = {
	goBack,
	updateProduct,
	id,
	name,
	price,
	quantity,
	expiringdate,
	owner,
	batchno

}