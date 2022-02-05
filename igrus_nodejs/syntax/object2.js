//객체지향프로그래밍 - 포인터
/*
 조건문, 반복문은 값이 될 수 없다.
 그러나 함수는 값이 될 수 있다!!
*/

var f = function(){
  console.log(1+1);
  console.log(1+2);
}

var a = [f];
a[0](); //배열

var o = {
  func:f //객체
}
o.func();
