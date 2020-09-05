#include<stdio.h>
void print(char * a)
{
    while(* a!='\0')
    {
        printf("%c",*a);
        a++;
    }
}
int main()
{
    char str[]="Hello";
    print(str);
}
