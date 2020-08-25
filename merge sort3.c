#include<stdio.h>
int main()
{
    int a[50],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
void mergesort(int *a,int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,mid+1,r);
    }
}
void merge(int *a,int l1,int r1,int l2,int r2)
{
    int i,j,k=0,temp[50];
    i=l1,j=l2;
    while(i<=r1&&j<=r2)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            i++;k++;
        }
        else
    {
        temp[k]=a[j];
        j++;k++;
    }
    }
    while(i<=r1)
    {
        temp[k]=a[i];
        k++;i++;
    }
    while(j<=r2)
    {
        temp[k]=a[j];
        k++;j++;
    }
    for(i=l1,j=0;i<=r2;i++,j++)
    {
    a[i]=temp[j];
    }
}
