#include<stdio.h>
void quicksort(int*,int,int);
int partition(int*,int,int);
void swap(int*,int*);
int main()
{
    int a[50],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void quicksort(int *a,int beg,int end)
{
    int loc;
    if(beg<end)
    {
        loc=partition(a,beg,end);
        quicksort(a,beg,loc-1);
        quicksort(a,loc+1,end);
    }
}
int partition(int *a,int beg,int end)
{
    int loc=beg;
    int left=beg,right=end;
    while(1)
    {
    while (a[loc]<=a[right])
        right--;
    if(loc==right)
        return loc;
    else if(a[loc]>a[right])
    {
        swap(&a[loc],&a[right]);
        loc=right;
    }
    while(a[loc]>=a[left])
        left++;
    if(loc==left)
        return loc;
    else if(a[loc]<a[left])
    {
        swap(&a[loc],&a[left]);
        loc=left;
    }
    }
}
void swap(int *x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
