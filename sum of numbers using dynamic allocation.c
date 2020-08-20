#include<stdio.h>
int main()
{
  int i,n,*arr,sum=0;
  printf("Enter elements: ");
  scanf("%d",&n);
  arr = (int *)malloc(n * sizeof(int));
  for(i = 0;i<n;i++)
    {
    printf("Enter element %d : ",(i+1));
    scanf("%d",arr+i);
    sum += *(arr+i);
    }
  printf("The sum of the provided input is: %d \n",sum);
  free(arr);
  return 0;
}
