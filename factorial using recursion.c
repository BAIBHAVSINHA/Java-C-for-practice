#include<stdio.h>
long factorial(int);
int main()
{
    int number;
    long fact=1;
    printf("enter the no whose factorial is to be found = ");
    scanf("%d",&number);
    printf("%1d",factorial(number));
    return 0;
}
long factorial(int number)
{
    if(number>=1)
        return number*factorial(number-1);
    else
        return 1;
}
