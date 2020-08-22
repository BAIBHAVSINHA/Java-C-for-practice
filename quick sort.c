#include<stdio.h>
int main()
{
    int n,i,a[50];
    printf("enter no of elements: ");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("Elements after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
int quicksort(int a[],int l,int r)
{
    int j;
    if(l<r)
    {
        j=partition(a,l,r);
		quicksort(a,l,j-1);
		quicksort(a,j+1,r);
    }
}
int partition(int a[],int l,int r)
{
    int piv,i,j,temp;
	piv=a[l];
	i=l;
	j=r+1;
	do
	{
		do
			i++;
		while(a[i]<piv&&i<=r);
		do
			j--;
		while(piv<a[j]);
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	while(i<j);
	a[l]=a[j];
	a[j]=piv;

	return(j);
}

