#include<stdio.h>
int main()
{
    printf("%d",sizeof(SI));
}
struct school
{
    double a;
    int b;
    char b;
    int c;
    char d;
};
struct school2
{
    char a;
    double b;
    int c;
};
struct school3
{
    sort int a;
    char b;
    int c;
};
#pragma pack(1) for packing purpose is used(this will provide the exact amount of space which is given)
