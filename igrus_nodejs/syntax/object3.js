var q = {
  v1:'v1',
  v2:'v2',
  f1:function (){
    console.log(this.v1); //객체 내에서 댁체를 대신하는 this(참조)
  },
  f2:function(){
    console.log(this.v2);
  }
}

q.f1();
q.f2();

//함수 포인터값을 객체로 추가하기!
