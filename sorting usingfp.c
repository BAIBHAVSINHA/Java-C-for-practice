#include<stdio.h>
int main()
{
    int a[10]={8,1,2,6,15,10,20,7,4,9};
    int i;
    sort(a);
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
}
int sort(int a[10])
{
    int i,j,t;
    for(j=i;j<10;j++)
    {
        for(j=i;j<10;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
