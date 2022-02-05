var args = process.argv;
console.log(args[2]);
console.log('A');
console.log('B');
if(args[2] === '1'){
  console.log('C1');
} else {
  console.log('C2');
}
console.log('D');

//콘솔창에서 아무 문자나 치면 그 문자가 출력됨.
//콘솔창에 1을 넣으면 c1이 출력됨

/*

console.log('A');
console.log('B');
if(true){
  console.log('C1');
} else {
  console.log('C2');
}
console.log('D');

*/
