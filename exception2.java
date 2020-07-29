//If base class doesn’t throw any exception but child class throws an checked exception
import java.io.*;
class Building {
   void color()
   {
      System.out.println("Blue");
   }
}
class Room extends Building{
   void color() throws IOException
   {
      System.out.println("White");
   }
   public static void main(String args[]){
      Building obj = new Room();
      try{
         obj.color();
      }catch(Exception e){
         System.out.println(e);
       }
   }
}
