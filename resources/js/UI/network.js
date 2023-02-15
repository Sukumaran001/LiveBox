// Defining function to update connection status
function updateConnectionStatus() {
    if (navigator.onLine) {
        clearInterval(netWorkChecking);
        var refresh = window.localStorage.getItem('refresh');
        if (refresh === null) {
            window.location.reload();
            window.localStorage.setItem('refresh', "1");
        }
    } else {
           setInterval(netWorkChecking, 2000);
        window.localStorage.removeItem('refresh');
    }
}

// Attaching event handler for the load event
window.addEventListener("load", updateConnectionStatus);

// Attaching event handler for the online event
window.addEventListener("online", function (e) {
    updateConnectionStatus();
});

// Attaching event handler for the offline event
window.addEventListener("offline", function (e) {
    updateConnectionStatus();
});



function netWorkChecking() {
  $('#Offline').modal('show');

   // onClick Event
   $('#retrybtn').on('click', function () {
        $('#Offline').modal('toggle');
    })
    $('#cancellbtn').on('click', function () {
        $('#Offline').modal('toggle');
    })
}
