#include<stdio.h>
int main()
{
    int i,a[]={1,13,23,42,53,24,43,42,12,48,31,1,21,2};
    sort(a,ascending);
    sort (a,descending);
}
int ascending(int first,int second)
{
    if(first<second)
        return -1;
    else if(first==second)
        return 0;
}else return 1;

int descending(int first,int decond)
{
    if (first<second)
    return 1;
    else if(first==second)
        return 0;
    else return -1;
}
