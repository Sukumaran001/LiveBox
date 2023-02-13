getParameterByName = (name, url = window.location.href) => {
    name = name.replace(/[\[\]]/g, '\\$&');
    var regex = new RegExp('[?&]' + name + '(=([^&#]*)|&|#|$)'),
        results = regex.exec(url);
    if (!results) return null;
    if (!results[2]) return '';
    return decodeURIComponent(results[2].replace(/\+/g, ' '));
}
getDataFromAPI = () => {
    //Need to write code when got the API from client
}

getDataFromQueryString = () => {
    let data = {};
    data.conferencename = getParameterByName("conferencename");
    data.isadmin = (getParameterByName("isadmin") === 'true');
    data.displayname = getParameterByName("displayname");
    data.recording = (getParameterByName("recording") === 'true');
    data.userid = (getParameterByName("userid")) ? getParameterByName("userid") : Date.now(); // temporary userid
    data.showonstream = false;
    if (data.conferencename != null && data.isadmin != null && data.displayname != null) {
        setDatatoLocalStorage(data);
        return data;
    }
    else {
        return false;
    }
}

getDataFromModalPopup = () => {
    let displayname = document.querySelector('#iddisplayname');
    let conferencename = document.querySelector('#idconferencename');
    let isAdmin = document.querySelector('#idisAdmin');
    let isRecording = document.querySelector('#idisRecording');
    let data = {};
    data.conferencename = conferencename.value;
    data.isadmin = isAdmin.checked;
    data.displayname = displayname.value;
    data.recording = isRecording.checked;
    data.userid = (getParameterByName("userid")) ? getParameterByName("userid") : Date.now(); // temporary userid
    data.showonstream = false;

    if (data.conferencename != null && data.isadmin != null && data.displayname != null) {
        setDatatoLocalStorage(data);
        return data;
    }
    else {
        return false;
    }
}

showModalPopup = () => {
    $('#iddisplaynamemodal').modal('show');
    let displayname = document.querySelector('#iddisplayname');
    let conferencename = document.querySelector('#idconferencename');
    let isAdmin = document.querySelector('#idisAdmin');
    $('#iddisplaynamemodal').on('shown.bs.modal', function () {
        displayname.select();
        displayname.focus();
    })
    /** populate the values in the text box */
    if (getParameterByName("displayname")) {
        displayname.value = getParameterByName("displayname");
    }
    else {
        if (localStorage.getItem("displayname")) {
            displayname.value = localStorage.getItem("displayname");
        }
    }
    if (getParameterByName("conferencename")) {
        conferencename.value = getParameterByName("conferencename").toLowerCase();
    }
    else {
        if (localStorage.getItem("conferencename")) {
            conferencename.value = localStorage.getItem("conferencename").toLowerCase();
        }
    }
    if (getParameterByName("isadmin")) {
        isAdmin.checked = JSON.parse(getParameterByName("isadmin"));
    }
    else {
        isAdmin.checked = JSON.parse(localStorage.getItem("isadmin"));
    }
    /** populate the values in the text box */
}

getDataFromLocalStorage = () => {
    let data = {};
    data.conferencename = localStorage.getItem("conferencename").toLowerCase();
    data.isadmin = JSON.parse(localStorage.getItem("isadmin"));
    data.displayname = localStorage.getItem("displayname");
    data.recording = JSON.parse(localStorage.getItem("recording"));
    data.userid = localStorage.getItem("userid");
    return data;

}
setDatatoLocalStorage = (data) => {
    localStorage.setItem("conferencename", data.conferencename.toLowerCase());
    localStorage.setItem("isadmin", data.isadmin);
    localStorage.setItem("displayname", data.displayname);
    localStorage.setItem("recording", data.recording);
    localStorage.setItem("userid", data.userid);
}

getDataFromLocalStorage1 = () => {
    let data = {};
    let data1 = ls.get('key1', { decrypt: true });
    data.conferencename = data1.conferencename;
    data.isadmin = data1.isadmin;
    data.displayname = data1.displayname;

    if (data.conferencename != null && data.isadmin != null && data.displayname != null) {
        return data;
    }
    else {
        return false;
    }

}

validateAuthorizedUser = () => {
    let querydata = getDataFromQueryString()
    let localstoragedata = getDataFromLocalStorage()
    if (querydata.conferencename === localstoragedata.conferencename && querydata.isadmin === localstoragedata.isadmin && querydata.displayname === localstoragedata.displayname) {
        return querydata
    } else {
        if (querydata.conferencename != localstoragedata.conferencename) {

            document.getElementById("error").innerHTML = "Invalid! conferencename ";
        } else if (querydata.isadmin != localstoragedata.isadmin) {


            document.getElementById("error").innerHTML = "Invalid! User ";
        }
        else {
            document.getElementById("error").innerHTML = "Invalid! Displayname ";
        }
        return false;
    }
}
if (navigator.cookieEnabled) {
    setLocalStorage = (name, value) => {
        localStorage.setItem(name, value);
    }
} else {
        confirm("Please Allow Your Browser ThirdParty Cookies!")
}


/*setLocalStorage = (name, value) => {
    localStorage.setItem(name, value);
}*/

getLocalStorage = (name) => {
    localStorage.getItem(name)
}

notification = (message, type = "success") => {
    // create the notification
    Notiflix.Notify.Init({
        width: "400px",
        zindex: "9999999999",
        position: "right-top",
        messageMaxLength: 300,
        fontSize: "16px",
        timeout: 2500,
        cssAnimation: true,
        closeButton: false,
        fontFamily: "SF Pro Display",
        cssAnimationStyle: "from-right",
    });

    // show the notification
    if (type === "success") Notiflix.Notify.Success(message);
    else if (type === "failure") Notiflix.Notify.Failure(message);
    else if (type === "warning") Notiflix.Notify.Warning(message);
    else Notiflix.Notify.Info(message);
}
