 var Context = require('Modules/Context');
 var Observable = require('FuseJS/Observable');
 var Storage = require("FuseJS/Storage");
 var Lifecycle = require('FuseJS/Lifecycle');

 var todaysDate = Observable()
 var LoggedIn = Observable()

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

  Context.products.clear() 
  Context.total.value=0
  Context.totalAmount.clear()
  Storage.read(Context.SAVENAME).then(function(content) {
    var data = JSON.parse(content)
    Context.logout(data.accessToken)
  }, function(error) {
  console.log("no accessToken in localStorage")
  });
   Storage.deleteSync(Context.SAVENAME);
   Storage.deleteSync(Context.STOREDATA);
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


module.exports = { LoggedIn: Context.isLoggedIn, deleteProduct, updateProduct, todaysDate, goBack, logout, createItem, products: Context.products, totalAmount: Context.totalAmount}
