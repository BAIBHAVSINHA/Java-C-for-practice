#include<stdio.h>
int main()
{
   int i,count,n[50];
   printf("enter elements: ");
   scanf("%d",&count);
   printf("Enter %d elements:\n",count);
   for(i=0;i<count;i++)
      scanf("%d",&n[i]);
   quicksort(n,0,count-1);
   printf("Sorted elements:\n");
   for(i=0;i<count;i++)
      printf("%d  ",n[i]);
   return 0;
}
void quicksort(int n[50],int l,int r)
{
   int i,j,pivot,temp;
   if(l<r)
    {
      pivot=l;
      i=l;
      j=r;
      while(i<j)
        {
         while(n[i]<=n[pivot]&&i<r)
         {
             i++;
         }
         while(n[j]>n[pivot])
         {
             j--;
         }
    if(i<j)
         {
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
         }
        }
      temp=n[pivot];
      n[pivot]=n[j];
      n[j]=temp;
      quicksort(n,l,j-1);
      quicksort(n,j+1,r);
    }
}

