cordova.define('cordova/plugin_list', function(require, exports, module) {
  module.exports = [
    {
      "id": "cordova-plugin-inappbrowser.inappbrowser",
      "file": "plugins/cordova-plugin-inappbrowser/www/inappbrowser.js",
      "pluginId": "cordova-plugin-inappbrowser",
      "clobbers": [
        "cordova.InAppBrowser.open"
      ]
    },
    {
      "id": "cordova-plugin-iosrtc.Plugin",
      "file": "plugins/cordova-plugin-iosrtc/www/cordova-plugin-iosrtc.js",
      "pluginId": "cordova-plugin-iosrtc",
      "clobbers": [
        "cordova.plugins.iosrtc"
      ]
    },
    {
      "id": "cordova-plugin-network-information.network",
      "file": "plugins/cordova-plugin-network-information/www/network.js",
      "pluginId": "cordova-plugin-network-information",
      "clobbers": [
        "navigator.connection"
      ]
    },
    {
      "id": "cordova-plugin-network-information.Connection",
      "file": "plugins/cordova-plugin-network-information/www/Connection.js",
      "pluginId": "cordova-plugin-network-information",
      "clobbers": [
        "Connection"
      ]
    },
    {
      "id": "info.androidbcd.plugins.custom.CordovaCustomPlugin",
      "file": "plugins/info.androidbcd.plugins.custom/www/CordovaCustomPlugin.js",
      "pluginId": "info.androidbcd.plugins.custom",
      "clobbers": [
        "cordova.plugins.CordovaCustomPlugin"
      ]
    }
  ];
  module.exports.metadata = {
    "cordova-plugin-inappbrowser": "5.0.0",
    "cordova-plugin-iosrtc": "8.0.1",
    "cordova-plugin-network-information": "3.0.0",
    "info.androidbcd.plugins.custom": "1.0.0"
  };
});