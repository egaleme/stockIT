var Context = require('Modules/Context');
var BusyTask = require("FuseJS/BusyTask");
var Observable = require("FuseJS/Observable");
var Storage = require("FuseJS/Storage");
var username = Observable();
var password = Observable();
var errMessage = Observable(); 
var loginError = Observable();


function login() {
	if (!username.value || !password.value) {
		errMessage.value = "must supply all fields"

		return;
	}

  var task = new BusyTask(myContent);
  
  Context.login(username.value, password.value, task)
  
    setTimeout(function() {
      task.done();
    }, 1000);

       	errMessage.value = ''
        username.value = ''
        password.value = ''
        loginError.value = ''
        router.push("home")
}

function goToCreateUser() {
      router.push("createuser")
}

 module.exports = {login, username, password, goToCreateUser, errMessage, loginError}
