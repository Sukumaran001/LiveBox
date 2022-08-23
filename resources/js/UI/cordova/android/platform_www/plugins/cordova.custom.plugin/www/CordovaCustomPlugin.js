cordova.define("cordova.custom.plugin.CordovaCustomPlugin", function(require, exports, module) {
var exec = require('cordova/exec');

exports.EndCallMethod = function (phrase, success, error) {
    exec(success, error, 'CordovaCustomPlugin', 'EndCallMethod', [phrase]);
};

});
