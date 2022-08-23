function success(result){
    console.log(result);
}

var Audiobtn = document.getElementById("idAudio");
//console.log(Audiobtn);
Audiobtn.addEventListener("click", (e)=>{
//console.log("Audiobutton clicked")
//Cordova.exec(success, error, "CordovaCustomPlugin", "AudioButtonListenerIos",[]);
cordova.exec(success, null, "CordovaCustomPlugin", "AudioButtonListenerIos", []);
    
    
    
})

var EndCall = document.getElementById("idEndCall");
//console.log(EndCall);
EndCall.addEventListener("click", (e)=>{
//console.log("EndCall button Clicked")
cordova.exec(success, null, "CordovaCustomPlugin", "EndcallButtonListenerIos",[]);
})

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

  var isadmin = getParameterByName('isadmin');

if(isadmin=='true'){
var muteAll = document.getElementById("muteall")
//console.log(muteAll);
muteAll.addEventListener("click", (e)=>{
//console.log("Mute All button clicked")
cordova.exec(success, null, "CordovaCustomPlugin", "MuteAllButtonListenerIos",[]);
})
}
