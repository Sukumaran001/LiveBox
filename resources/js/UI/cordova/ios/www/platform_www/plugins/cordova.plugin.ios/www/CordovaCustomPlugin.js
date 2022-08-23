cordova.define("cordova.plugin.ios.CordovaCustomPlugin", function(require, exports, module) {
var exec = require('cordova/exec');

exports.coolMethod = function (arg0, success, error) {
    exec(success, error, 'CordovaCustomPlugin', 'coolMethod', [arg0]);
};

});
