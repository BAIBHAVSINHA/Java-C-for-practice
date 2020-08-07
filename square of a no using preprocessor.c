#include<stdio.h>
#define SQUARE(x)x*x
void main()
{
 int num;
 printf("Enter any number : ");
 scanf("%d",&num);
 printf("\nThe square is : %d",SQUARE(num));
}
