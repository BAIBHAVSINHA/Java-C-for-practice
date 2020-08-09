#include<stdio.h>
int main()
{
    int arr[50],n,i,j,index,swap;
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
           scanf("%d",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {int min=arr[i];
        for(j=i+1;j<n;j++)
        {
          if(arr[j]<min)
          {
              min=arr[j];
              index=j;
          }
        }
        swap(&arr[i],&arr[index]);
    }
    printf("%d",arr[i]);
}
