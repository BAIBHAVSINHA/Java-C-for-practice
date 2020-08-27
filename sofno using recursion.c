#include<stdio.h>
int sumOfDigits(int num);
int main()
{
    int num,sum=0;
    printf("enter the number whose sum is to be found\n");
    scanf("%d",&num);
    sum=sumOfDigits(num);
    printf("%d",sum);
    return 0;
}
int sumOfDigits(int num)
{
    if(num!=0)
    {
        return((num%10)+sumOfDigits(num/10));
    }
    else
    {
        return 0;
    }
}
