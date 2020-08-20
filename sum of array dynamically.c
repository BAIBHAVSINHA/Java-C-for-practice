#include<stdio.h>
int main()
{
	int *ptr;
	int n,i,sum;
	printf("Enter limit of the array: ");
	scanf("%d",&n);
	//declare memory dynamically
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",(ptr+i));
	}
	printf("\nEntered array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		sum+=*(ptr+i);
	}
	printf("Sum of array elements is: %d\n",sum);
	free(ptr);
	return 0;
}
