 var Context = require('Modules/Context')
 var Observable = require('FuseJS/Observable')

 var todaysDate = Observable()

 function renderCurrentDate() {
		var date = new Date()
		var dateString = date.toDateString()
		todaysDate.value ="as at   "+  dateString
}

  renderCurrentDate()

  function createItem() {
    router.push('createitem')
  }

  function updateProduct(args) {
    Context.item.value = args.data
    router.push('updateitem')
  }

function logout() {
  Context.user.clear()
  Context.products.clear() 
  Context.total.clear()
  Context.logout()
  router.goto('login')
  }

  function deleteProduct(args) {
    var product = args.data
    Context.deleteProduct(product)
    
  }

 function goBack() {
  Context.totalAmount.value = 0
 	router.goto('login')
 }


module.exports = {deleteProduct, updateProduct, todaysDate, goBack, logout, createItem, products: Context.products, totalAmount: Context.totalAmount}
