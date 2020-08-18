import java.util.Scanner;
class signs
{
    public static void main(String[] args)
    {
     final int N=5;
     final int P=2;
     int sign=1;
     int sum=0;
     int term=P;

     for(int i=1;i<=N;i++)
     {
         sum=sum+1*sign*(term);
         sign=sign*-1;
         term=term*P;
     }
     System.out.println("Sum Is "+ sum);
    }
}
