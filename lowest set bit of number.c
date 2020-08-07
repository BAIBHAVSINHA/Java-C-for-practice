#include <stdio.h>
#define int_size sizeof(int) * 20
int main()
{
    int num, flag, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    flag= int_size - 1;
    for(n=0; n<int_size; n++)
    {
        if((num>>n) & 1)
        {
            flag= n;
            break;
        }
    }
    printf("Lowest set bit in %d is %d", num, flag);
    return 0;
}
