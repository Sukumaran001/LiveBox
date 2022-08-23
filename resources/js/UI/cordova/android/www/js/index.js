var DomainName = getParameterByName('domain')
var conferencename = getParameterByName('conferencename');
var isadmin = getParameterByName('isadmin')
var displayname = getParameterByName('displayname')
var recording = getParameterByName('recording')

//Form the url to be loaded in the webview
const MainUrl = "https://"+DomainName+'?conferencename='+conferencename+'&isadmin='+isadmin+'&displayname='+displayname+'&recording=' + recording +'';

var app = {
// Application Constructor
initialize: function () {
  document.addEventListener(
    "deviceready",
    this.onDeviceReady.bind(this),
    false
  );
},

onDeviceReady: function () {
  // dynamic loading image
  this.receivedEvent("deviceready");
  const LoadingImg = document.createElement("img");
  LoadingImg.src = "./img/pleasewait.gif";
  LoadingImg.alt = "reload";
  LoadingImg.style.width = "2.6rem";
  LoadingImg.style.display = "inline-block";

  document.getElementById("Networkstatus").appendChild(LoadingImg);

  const { permissions } = cordova.plugins;
  // android platform permissions
  if (window.device.platform === "Android") {
    permissions.requestPermissions([
      permissions.CAMERA,
      permissions.RECORD_AUDIO,
      permissions.MODIFY_AUDIO_SETTINGS,
    ]);
  }
  //  ios platform permissions
  if (window.device.platform === "iOS") {
    const { iosrtc } = cordova.plugins;

    // Connect 'iosrtc' plugin, only for iOS devices
    iosrtc.registerGlobals();
    // Use speaker audio output
    iosrtc.selectAudioOutput("speaker");
    // Request audio and/or camera permission if not requested yet
    var needMic = true;
  var needCamera = true;
    iosrtc.requestPermission(needMic, needCamera, function (permissionApproved) {
      console.log(
        "requestPermission status: ",
        permissionApproved ? "Approved" : "Rejected"
      );
    });
  }
},
receivedEvent: function (id) {
  // network connection status
    if (navigator.connection.type == Connection.NONE) {
      // call the offline network
        onOffline();
    } else {
          redirectTo(MainUrl);

    }

 
},
};
//Initialize the app
app.initialize();

/**
 * Check the Internet connection
 */
var NetWorkChecking = document.querySelector("#Networkstatus");
NetWorkChecking.addEventListener("offline", onOffline, false);

function onOffline() {
NetWorkChecking.innerHTML = "<p>please check Your internet connection!</p>";

}



/*
 * Redirect the External conference link
 * @param {location} location 
 */

function redirectTo(location) {
  window.open = cordova.InAppBrowser.open;
  
  window.open(location, "_self", "location=no,zoom=no,toolbar=no");
  }

/*
 * Get the querystring parameter values
 * @param {name} name 
 * @returns 
 */

function getParameterByName( name ){
  name = name.replace(/[\[]/,"\\\[").replace(/[\]]/,"\\\]");
  var regexS = "[\\?&]"+name+"=([^&#]*)";
  var regex = new RegExp( regexS );
  var results = regex.exec( window.location.href );
  if( results == null )
    return "";
  else
    return decodeURIComponent(results[1].replace(/\+/g, " "));
}

