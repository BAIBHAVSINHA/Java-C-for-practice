Q. Class Operators?
  Sol:->
    
class operator
{ public static void main(String args[])

{ int a=10,b=-10;
  boolean c=true,d;
  System.out.print(~a);
  System.out.print(~b);
  System.out.print(!c);
  System.out.print(!d);
  b=10;
  System.out.println(a++ + b++);
  System.out.println(a++ + ++b);
}
}
