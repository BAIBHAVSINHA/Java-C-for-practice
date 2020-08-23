#include<stdio.h>
int main()
{
    int a=1,b=2,c=3;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
    int **sptr=&ptr1;
    *sptr=ptr2;
}
