#include<stdio.h>
int main()
{
    int a[50][50],i,j,r1,c1,product;
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
    for(i=0;i<r1;i++)
    {
        product=1;
        for(j=0;j<c1;j++)
        {
            product=product*a[i][j];
        }
        printf("\nThe product of %d row is %d",i,product);
    }
    for(j=0;j<c1;j++)
    {
        product=1;
        for(i=0;i<r1;i++)
        {
            product=product*a[i][j];
        }
        printf("\nThe product of %d column is %d",j,product);
    }
    return 0;
}
