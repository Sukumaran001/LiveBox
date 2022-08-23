cordova.define("cordova.custom.Url.plugin.CordovaCustomUrlPlugin", function(require, exports, module) {
var exec = require('cordova/exec');

exports.coolMethod = function (arg0, success, error) {
    exec(success, error, 'CordovaCustomUrlPlugin', 'coolMethod', [arg0]);
};

});
