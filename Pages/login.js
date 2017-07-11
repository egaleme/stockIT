var Context = require('Modules/Context');
var Observable = require("FuseJS/Observable");
var Storage = require("FuseJS/Storage");
var Timer = require("FuseJS/Timer");
var username = Observable();
var password = Observable();
var errMessage = Observable(); 

var accessChannel = Context.socket.channel("access_token:enter")

  accessChannel.join()
    .receive("ok", function(data) {
    })
    .receive("error", function(resp) {
    })

function login() {
  Context.totalAmount.value = "";
  if (!username.value || !password.value) {
    errMessage.value = "must supply all fields" ;
    return;
  }
accessChannel.push("create", {user: {username: username.value, password: password.value}}).receive("error", function(resp) {
  console.log(resp.errors)
      isBusy.deactivate();
      errMessage.value= resp.errors;
       username.value = ''
       password.value = ''
})
isBusy.activate();

accessChannel.on("create", function(data) {
   isBusy.deactivate();
   Context.accessToken.value = data.data.access_token;
   var tokenObject = {accessToken: data.data.access_token};
   Storage.write(Context.SAVENAME, JSON.stringify(tokenObject)).then(function(content) {
      if(content !== '') {
        Context.isLoggedIn.value = true
      }
    });
 var prodChannel = Context.socket.channel("products:auth", {guardian_token: Context.accessToken.value});

 prodChannel.on("products_loaded", function(payload) {
  Context.initialProducts(payload.data);

 })

 prodChannel.join()
    .receive("ok", function(resp) {
      console.log("successfully authenticated")
        errMessage.value = ''
        username.value = ''
        password.value = ''
        router.push("home")
    })
    .receive("error", function(resp) {
      console.log(resp.message)
      isBusy.deactivate();
      errMessage.value= "please verify email address";
       username.value = ''
       password.value = ''

    })

})


}

function goToCreateUser() {
      router.push("createuser")
}

 module.exports = {login, username, password, goToCreateUser, errMessage}
