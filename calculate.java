Q. Write a program that reads from the user four integers representing the numerators and denominators of two fractions,
    calculates the results of the two fractions and displays the values of the fractions sum, subtraction, multiplication and division.

     Sample run:
          Enter the numerator and denominator of the first fraction: 6 4
          Enter the numerator and denominator of the second fraction: 8 5
          The sum is: 3.1
          The subtraction is: -0.1
          The multiplication is: 2.4
          The division is: 0.9375 
      
Sol:->
    import java.util.Scanner;

public class FractionCalculations {

public static void main(String[] args) {
// TODO Auto-generated method stub

Scanner reader = new Scanner(System.in);
System.out.println("Enter first number numerator: ");
int num1 = reader.nextInt();
System.out.println("Enter first number denominator: ");
int den1 = reader.nextInt();
System.out.println("Enter second number numerator: ");
int num2 = reader.nextInt();
System.out.println("Enter second number denominator: ");
int den2 = reader.nextInt();
reader.close();

//IMPORTANT: CAST NUMERATOR TO DOUBLE
double number1 = (double)num1/den1;
double number2 = (double)num2/den2;
