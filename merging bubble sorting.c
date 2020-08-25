#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],m,n,i,j,k=0;
    printf("Enter the first array: ");
    scanf("%d",&m);
    printf("Enter sorted elements of first array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter size of a second array: ");
    scanf("%d",&n);
    printf("Enter sorted element of second array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    if(i>=m)
    {
        while(j<n)
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(j>=n)
    {
        while(i<m)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    printf("\n after merging both arrays: ");
    for(i=0;i<m+n;i++)
    {
        printf("%d ",c[i]);
    }
}
