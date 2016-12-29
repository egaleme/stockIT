var products = [
{
	id: "1",
	name: "Peak 123",
	batchno: "pk-11",
	expiringdate: "Sun Dec 04 2016",
	price: "2500",
	quantity: "10",
	owner: "egaleme"
},
{
	id: "2",
	name: "Milo 900g",
	batchno: "nt-ki-11",
	expiringdate: "Tue Dec 06 2016",
	price: "2000",
	quantity: "20",
	owner: "kele2016"
},
{
	id: "3",
	name: "Sugar",
	batchno: "sugar-11",
	expiringdate: "Sun Dec 25 2016",
	price: "480",
	quantity: "10",
	owner: "egaleme"
},
{
	id: "4",
	name: "Rice",
	batchno: "-",
	expiringdate: "-",
	price: "25000",
	quantity: "10",
	owner: "egaleme"
}]

var users = [
{
	id: "1",
	username: "egaleme",
	password: "2016"
},
{
	id: "2",
	username: "kele2016",
	password: "2016"
}]

function login(username, password) {
	var data
	users.forEach(function(user) {
		if(user.username === username && user.password === password) {
			data = user
		}
	})
	return new Promise(function(resolve, reject) {
		setTimeout(function() {
			resolve(data)
		}, 9)
	})
}

function getProducts(owner) {
	var data = []
	products.forEach(function(product) {
		if (product.owner === owner) {
			data.push(product)
		}
	})
	return new Promise(function(resolve, reject) {
		setTimeout(function() {
			resolve(data)
		}, 0)
	})
}

module.exports = {
	getProducts,
	login
}
