#include <stdio.h>
int main()
{
    int a,b;
    for(a=0;a<5;a++)
    {
        for(b=0;b<5;b++)
    {
        if(a+b>=4)
            printf("* ");
        else
        printf("b ");
    }
    printf("\n");
    }
    return 0;
}
