#include<stdio.h>
int max(int n,int b[]);
int min(int n,int c[]);
int range(int large,int small);
int main()
{
    int i,a[10],size,result,large ,small;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    large=max(size,a);
    small=min(size,a);
    result=range(large,small);
    printf("%d %d %d",large,small,result);
}
int max (int size,int b[])
{
    int i,large=b[0];
    for(i=0;i<size;i++)
    {
        if(large<b[i])
        {
            large=b[i];;
        }
    }
        return large;
    }
    int min(int size, int c[])
    {
        int i,small=c[0];
        for(i=0;i<size;i++)
        {
            if (small>c[i])
            {
                small=c[i];
            }
        }
        return small;
    }
    int range(int large,int small)
    {
        int range;
        range=large-small;
        return range;
    }

}
