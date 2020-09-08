Write a program in java to change number into words ?
for eg:-> 2341 into Two Thousand Three Hundred Fourthy One

import java.util.Scanner;

public class Num2Txt {

private static final String[] tensNames = {
"",
" Ten",
" Twenty",
" Thirty",
" Forty",
" Fifty",
" Sixty",
" Seventy",
" Eighty",
" Ninety"
};
private static final String[] numNames = {
"",
" One",
" Two",
" Three",
" Four",
" Five",
" Six",
" Seven",
" Eight",
" Nine",
" Ten",
" Eleven",
" Twelve",
" Thirteen",
" Fourteen",
" Fifteen",
" Sixteen",
" Seventeen",
" Eighteen",
" Nineteen"
};

public static void main(String []args)
{
Scanner reader = new Scanner(System.in);
System.out.println("Enter a whole number (max 4 digits): ");
int n = reader.nextInt();
System.out.println(n);
reader.close();
int units = n%10;
int tens = (n%100 - units)/10;
int hundreds = (n%1000 - (tens+units))/100;
int thousands = (n-(n%1000))/1000;
System.out.println("In the thousands place: " +thousands);
System.out.println("In the hundreds place: " +hundreds);
System.out.println("In the tens place: " +tens);
System.out.println("In the units place: " +units);
if(n==0)
  
