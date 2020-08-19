#include<stdio.h>
#define MAXSZ 20
int stack[MAXSZ],top=-1;
int push(int item)
{
    if(top==MAXSZ-1)
    {
        printf("overflow");
        return;
    }
    top=top+1;
    stack[top]=item;
    return;
}
int pop()
{
    if(top==-1)
    {
        printf("underflow");
        return;
    }
    int item=stack[top];
    top=top-1;
    return item;
}
int main()
{
    int temp;
    push(10);
    push(20);
    push(40);
    int item=pop();
    printf("%d",item);
    item=pop();
    printf("%d",item);
}
