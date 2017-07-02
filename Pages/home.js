 var Context = require('Modules/Context');
 var Observable = require('FuseJS/Observable');
 var Storage = require("FuseJS/Storage");
 var Lifecycle = require('FuseJS/Lifecycle');
 var Timer = require('FuseJS/Timer');

 var todaysDate = Observable();
 var LoggedIn = Observable();
 var isLoading = Observable(false);

var prodChannel = Context.socket.channel("products:joined", {guardian_token: Context.accessToken.value});

prodChannel.on("load_more", function(payload) {
  Context.loadMore(payload.data)
})

prodChannel.on("logout", function(resp) {
  console.log(resp.message)
  Context.accessToken.clear();
  router.goto('login');
})

prodChannel.join()
  .receive("ok", function(resp) {
    console.log("Joined products")
  })
  .receive("error", function(resp) {
    return console.log("Unable to join", resp)
  })

function loadMore() {
  var offset = Context.products.length;
  var limit = Context.products.length + 6;
  prodChannel.push("load_more", {limit: limit, offset: offset})
}

 function renderCurrentDate() {
		var date = new Date()
		var dateString = date.toDateString()
		todaysDate.value ="as at   "+  dateString
}

function endLoading() {
  isLoading.value = false;
}

function reloadHandler(){
  isLoading.value = true;
  prodChannel.on("products_loaded", function(payload) {
    Context.getProducts(payload.data);
  })

  Timer.create(endLoading, 1000, false);
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
   Storage.deleteSync(Context.SAVENAME);
   Storage.deleteSync(Context.STOREDATA);
   })
   prodChannel.push("logout", {message: "logged out"})
  }

  function deleteProduct(args) {
    var product = args.data
    prodChannel.push("delete_product", {productid: product.productid})
    Context.deleteProduct(product)
  }

 function goBack() {
  Context.totalAmount.value = 0
 	router.goto('login')
 }


module.exports = {loadMore: loadMore,  isLoading: isLoading, reloadHandler: reloadHandler, LoggedIn: Context.isLoggedIn, deleteProduct, updateProduct, todaysDate, goBack, logout, createItem, products: Context.products, totalAmount: Context.totalAmount}
