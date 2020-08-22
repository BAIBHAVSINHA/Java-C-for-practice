#include<stdio.h>
int main()
{
 int a[100], size, i, j,count=0;
 printf("Enter number of elements in array\n");
 scanf("%d", &size);
 printf("Enter %d numbers\n", size);
 for(i = 0; i < size; i++)
    {
  scanf("%d",&a[i]);
    }
 printf("Distinct Elements\n");
 for(i = 0; i < size; i++)
    {
  for (j=0; j<i; j++)
       {
      if (a[i] == a[j])
       break;
       }
     if (i == j)
        {
            count++;
        }
    }
    printf("%d",count);
 return 0;
}
