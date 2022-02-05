var testFolder = './data'; //점 1개: 같은 디렉토리, 점 2개: 상위 디렉토리
var fs = require('fs');

fs.readdir(testFolder, function(error, filelist){
  console.log(filelist);
})
