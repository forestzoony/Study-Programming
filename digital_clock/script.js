let handleId = 0;
const h1 = document.getElementById("time")
const go = document.getElementById("go")
const stopp = document.getElementById("stop")

//현재 시간 불러오기 
function getTime() {
    const date = new Date()
    const hour = date.getHours();
    const minutes = date.getMinutes();
    const seconds = date.getSeconds();
    const time = `${hour}:${minutes}:${seconds}`
    h1.textContent = time; 
}

go.onclick = function() {
    if(handleId == 0) {
        handleId = setInterval(getTime,1000)
    }
}

stopp.onclick = function() {
    clearInterval(handleID)
    handleID = 0;
}