var expand = document.getElementById("expand");
expand.onclick = function() {
    if (expand.innerText == "...") {
        expand.innerText = "X";
        document.getElementById("ShowNe").style.display = "block";
        document.getElementById("mainPage").style.display = "none";
    }
    else {
        expand.innerText = "...";
        document.getElementById("ShowNe").style.display = "none";
        document.getElementById("mainPage").style.display = "flex";
    }
}

var butArrowLeft = document.getElementById("desButtonLeft");
var butArrowRight = document.getElementById("desButtonRight");
var count = 1;
butArrowLeft.onclick = function() {
    if (count > 1) {
        count -= 1;
    }
    document.getElementById('radio' + count).checked = true;
}
butArrowRight.onclick = function() {
    if (count < 4) {
        count += 1;
    }
    document.getElementById('radio' + count).checked = true;
}