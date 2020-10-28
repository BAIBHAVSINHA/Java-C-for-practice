#include<stdio.h>

void foo(int **p2)
{
    int eq2=5;
    *p2=&eq2;
    printf("%d",**p2);
}

int fun2()
{
    int a=1,b=2,c=3,d=4,e=7;
    return(a+b);
}

int main()
{
    int eq=10,*p=eq,s;
    printf("%d",*p);
    foo(&p);
    s=func2();
    printf("%d",*p);
    return 0;
}
