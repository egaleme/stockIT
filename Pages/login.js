var Context = require('Modules/Context');
var Observable = require("FuseJS/Observable");
var Storage = require("FuseJS/Storage");
var Timer = require("FuseJS/Timer");
var username = Observable();
var password = Observable();
var errMessage = Observable(); 



function login() {
  Context.totalAmount.value = "";
  if (!username.value || !password.value) {
    errMessage.value = "must supply all fields" ;
    return;
  }

isBusy.activate();
  
  Context.login(username.value, password.value).
  then(function (response) {
    if (response.ok) {
        return  response.json()
       } else {
     errMessage.value= "incorrect username/password";
    isBusy.deactivate();
      Context.isLoggedIn.value = false;
     throw new Error("user not found")
     }
   }).
  then(function(data) {
    if (data) {
      isBusy.deactivate();
      Context.accessToken.value = data.data.access_token;
      var tokenObject = {accessToken: data.data.access_token};
     // var storeObject = {store: data.data[0].user.products};
     // Storage.write(STOREDATA, JSON.stringify(storeObject));
      Storage.write(Context.SAVENAME, JSON.stringify(tokenObject)).then(function(content) {
        if(content !== '') {
          Context.isLoggedIn.value = true
        }
      });
     // Context.initialProducts();
var prodChannel = Context.socket.channel("products:auth", {guardian_token: Context.accessToken.value});

 prodChannel.on("products_loaded", function(payload) {
  Context.initialProducts(payload.data);
 })

 prodChannel.join()
    .receive("ok", function(resp) {
      console.log("successfully authenticated")
    })
    .receive("error", function(resp) {
      return console.log("Unable to join", resp)
    })

        errMessage.value = ''
        username.value = ''
        password.value = ''
        router.push("home")
    }

    
    }).
  catch(function(error) {
    isBusy.deactivate();
    console.log(error.message)
  })

}

function goToCreateUser() {
      router.push("createuser")
}

 module.exports = {login, username, password, goToCreateUser, errMessage}
