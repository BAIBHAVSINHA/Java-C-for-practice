#include<stdio.h>
int fact(int num);
int main()
{
    int n,i,x,num,pow,j=0;
    scanf("%d",&n);
    scanf("%d",&num);
    int temp=num;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            printf("%d %d-",num,fact(j));
        else
            printf("%d %d+",num,fact(j));
            num=num*temp*temp;
            j=j+2;
    }
    return 0;
}
int fact(int num)
{
    if(num>=1)
        return num*fact(num-1);
    else
        return 1;
}
