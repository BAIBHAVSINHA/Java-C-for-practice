#include<stdio.h>
int main()
{
    int *p;
    int (*ptr)[5];
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",arr[i]);
    }
    ptr = &arr;
    p = arr;
    printf("%d,%d",p,ptr);
    p++,ptr++;
    printf("\n%d,%d",p,ptr);
}
