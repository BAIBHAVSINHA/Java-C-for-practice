Q.2D Array pointers?
    Sol:->
        
#include<stdio.h>
int main()
{
    int a[50][50],i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d ",*(*(a+i)+j));
        }
    }
}
