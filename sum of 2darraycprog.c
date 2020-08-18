#include<stdio.h>
int main()
{
    int a[50][50],i,j,r1,c1;
    printf("Enter the rows and columns of the matrix=\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the value of matrix=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<r1;i++)
    {
        sum=0;
        for(j=0;j<c1;j++)
        {
            sum=sum+a[i][j];
        }
        printf("\nThe sum of %d row is %d",i,sum);
    }
    for(j=0;j<c1;j++)
    {
        sum=0;
        for(i=0;i<r1;i++)
        {
            sum=sum+a[i][j];
        }
        printf("\nThe sum of %d column is %d",j,sum);
    }
}
