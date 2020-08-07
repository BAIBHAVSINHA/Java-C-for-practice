#include<stdio.h>
#define SQ(x)(x*x)
#define CU(x)(SQ(x)*x)
void main()
{
 int num;
 printf("Enter any number : ");
 scanf("%d",&num);
 printf("\nThe cube is : %d",CU(num));
}

