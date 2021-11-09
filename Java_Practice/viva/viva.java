package viva;

class A{
  public void print(){
    System.out.println("A Class");
  }
}

class B extends A{
  public void print(){
    System.out.println("B Class");
  }
}

public class viva {
  public static void main(String args[]){
    System.out.println("Main Class");
    A obj= new B();
    obj.print();
  }
}
