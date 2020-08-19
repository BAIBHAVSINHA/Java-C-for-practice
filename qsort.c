#include<stdio.h>
//void qshot(void*base,size t no of mem,size t size of one mem,int(*compare)(const void*,const void*);
int ascending(const void *one,const void *two)
{
        int first=*(int*)one;
        int second=*(int*)two;
        if(first<second)
            return -1;
        else if(first==second)
            return 0;
        else
            return 1;
}
int descending(void*one,void*two)
{
    int first=*(int*)one;
    int second=*(int*)two;
    if(first<second)
        return 1;
    else if(first==second)
        return 0;
    else
        return -1;
}
int main()
{
    int i,a[]={8,41,1,2,15,10,2};
    qsort(a,7,sizeof(int),ascending);
    for(i=0;i<7;i++)
    {
         printf("%d ",a[i]);
    }
    qsort(a,7,sizeof(int),descending);
    for(i=0;i<7;i++)
    {
         printf("%d ",a[i]);
    }
}
