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
    int diff=0;
    for(i=0;i<r1;i++)
    {
        diff=0;
        for(j=0;j<c1;j++)
        {
            diff=diff-a[i][j];
        }
        printf("\nThe diff of %d row is %d",i,diff);
    }
    for(j=0;j<c1;j++)
    {
        diff=0;
        for(i=0;i<r1;i++)
        {
            diff=diff-a[i][j];
        }
        printf("\nThe diff of %d column is %d",j,diff);
    }
}
