var Context = require('Modules/Context')

var Observable = require("FuseJS/Observable");
var username = Observable();
var password = Observable();
var uid = Observable() ;
var err = Observable();
var isShowing = Observable(false)

function startShowing() {
  isShowing.value = true
}

function login() {
  Context.login(username.value, password.value).
	then(function(response) {
        if (response.ok) {
          return response.json()
        } else {
          username.value="";
          password.value="";
          throw new Error("Username/Password is not correct");
        }
      }).
      then(function(data) {
        username.value = ''
        password.value = ''
       Context.user.value = data.data[0].user_id
       Context.accessToken.value = data.data[0].access_token
       Context.getProducts()
       router.push("home")
     })
    .catch(function(error) {
     err.value = error.message
    })


}

function goToCreateUser() {
      err.value = ""
      router.push("createuser")
    };

function goBack() {
  router.goBack()
}

  module.exports = {startShowing, login, username, password, err, goToCreateUser, goBack, isShowing}
