#include<stdio.h>
int main()
{
    int a[50][50],i,j,sumi=0,sumj=0;
    printf("Enter the no of salesman=\n");
    scanf("%d",&i);
    printf("Enter the no of product=\n");
    scanf("%d",&j);
    printf("Enter the amount of products=\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        sumi=0;
        for(j=0;j<3;j++)
        {
            sumi=sumi+a[i][j];
        }
        printf("\nThe sales of %d salesman is %d",i+1,sumi);
    }
    for(j=0;j<3;j++)
    {
        sumj=0;
        for(i=0;i<5;i++)
        {
            sumj=sumj+a[i][j];
        }
        printf("\n\nThe sales of %d product is %d",j+1,sumj);
    }
    return 0;
}
