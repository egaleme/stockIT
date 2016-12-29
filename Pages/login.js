var Context = require('Modules/Context')
var API_URL = require('Modules/api')

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
  then(function(data) {
    username.value = ''
    password.value = ''
    Context.user.value = data.username
    router.push('home')
  })
	/*
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
        uid.value = data.uid
        fetch(`${API_URL}/users/${uid.value}`, {
          method: 'get'
        }).
        then(function(response) {
          return response.json()
        }).
        then(function(data) {
          username.value=""
          password.value=""
          err.value= ""
					Context.user.value = data.username
					router.push('home')
        });
      }).
      catch(function(error) {
        err.value = error.message
      });
*/

}

function goToCreateUser() {
      err.value = ""
      router.push("createuser")
    };

function goBack() {
  router.goBack()
}

  module.exports = {startShowing, login, username, password, err, goToCreateUser, goBack, isShowing}
