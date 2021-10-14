package Java_Practice.oops_class_inheritance1;

class A{
  int a;
  float b;
  void setAttributes(int x, float y){
  a=x;
  b=y;
  }
  }
  class B extends A{
  int c;
  int d;
  void setAttributes2(int x,int y){
  c=x;
  d=y;
  }
  }
  class C extends B{
  int e;
  int f;
  void setAttributes3(int x,int y){
  e=x;
  f=y;
  }
  }
  class InheritanceTest{
  public static void main(String[] args){
  C obj= new C();
  obj.setAttributes(10,20);
  obj.setAttributes2(30,40);
  obj.setAttributes3(50,60);
  System.out.println("a:"+obj.a+" b:"+ obj.b+" c:" +obj.c+ " d:" +obj.d+ " e:"+obj.e +" f:"+ obj.f);
  }
  }