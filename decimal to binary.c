#include <stdio.h>
void Binary(int);
int main()
{
    int number;

    printf("Enter number to convert to binary: ");
    scanf("%d", &number);

    Binary(number);
	return 0;
}

void Binary(int num)
{
    if (num == 0)
    {
        return ;
    }

    Binary(num / 2);
    printf("%d", num % 2);
}
