#include<stdio.h>
int main()
{
    int n,i,a[50],ceil,floor,x;
    printf("enter size of an array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter value of x");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
     if(x<=a[i])
     {
         cell=i;
         break;
     }
    }
    floor=cell-1;
    if(a[cell=x])
    {
        floor=cell-1;
        cell=cell+1;
    }
    if (floor<1)
    {
        for
    }


}
