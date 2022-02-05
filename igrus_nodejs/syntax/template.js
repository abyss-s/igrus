// 문자열의 표현과 문자의 치환을 간단히 해주는 문법

var name = '뫄뫄야';
var letter = '안녕 '+name+'\n\n오랜만이야,'+name;
console.log(letter);

var name = '뫄뫄야';
var letter = `안녕 ${name}~ 오랜만이야, ${name}.`
console.log(letter);


// 줄바꿈: 문자앞에서 \n 사용
// 키모드 물결표랑 같이있는 백틱(backtic) - 리터럴 `` 사용
