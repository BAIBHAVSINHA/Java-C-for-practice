#include <stdio.h>
int main()
{
  int arr[50],n,i,j,pos,swap;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n",n);
  for (i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for (i=0;i<(n-1);i++)
  {
    min=i;
    for (j=i+1;j<n;j++)
    {
      if (arr[min]>arr[j])
        min=j;
    }
    if (min!=i)
    {
      swap = arr[i];
      arr[i] = arr[min];
      arr[min] = swap;
    }
  }
  printf("Sorted list in ascending order:\n");
  for(i=0;i<n;i++)
  {
     printf("%d\n", arr[i]);
  }
  return 0;
}
