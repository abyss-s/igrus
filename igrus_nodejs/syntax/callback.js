
/*
function a() {
  console.log('A');
}
*/


var a = function(){ //함수가 값이다
  console.log('A');
}

function slowfunc(callback){
  callback();
}

slowfunc(a);

//비동기 함수 파라미터에 동기함수를 넣어서 지연시킨다..?
