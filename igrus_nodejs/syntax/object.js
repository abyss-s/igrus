var members = ['aaa','bbb','ccc'];
console.log(members[1]); //bbb
var i = 0;
while(i < members.length){
  console.log('array loop', members[i]);
  i = i + 1;
}


var roles = {
  'programmer':'aaa',
  'designer':'bbb',
  'manager':'ccc'
}
console.log(roles.designer);
console.log(roles['designer']);

for(var n in roles){
  console.log('object - ', n, 'value - ', roles[n]);
}
