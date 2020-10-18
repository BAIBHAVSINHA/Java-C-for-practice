Q. Conversion binary to decimal?
#include <stdio.h>
int convertBinaryToDecimal(long long n);
int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("%d in binary = %d in decimal", n, convertBinaryToDecimal(n));
    return 0;
}
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, rem;
    while (n!=0)
    {
        rem = n%10;
        n /= 10;
        decimalNumber = rem*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
