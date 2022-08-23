// var DynamicManifest = fetch("../resources/js/pwa/pwa-js/pwa.webmanifest")
// .then(function(response) {
//    return response.json();
// })
// .then(function(data) {
//  console.log('hi',data)});
//  DynamicManifest.start_url = window.location.href;
//  console.log(DynamicManifest.start_url)
// const stringManifest = JSON.stringify(DynamicManifest);
// const blob = new Blob([stringManifest], {type: 'application/json'});
// console.log(blob);
// const manifestURL = URL.createObjectURL(blob);
// console.log("hi",manifestURL);

// document.querySelector('#my-manifest-url').setAttribute('href', manifestURL);


// var link = document.createElement('Link');
// link.rel = "manifest";
// link.setAttribute('href', 'data:application/json;charset=8' + stringManifest)