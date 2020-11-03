Q. Binary Equivalence using recursion?
Sol:->      
    #include<stdio.h>
    int binary(int);
    int main()
    {
        int num, bin;
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        bin = binary(num);
        printf("The binary equivalent of %d is %d\n", num, bin);
    }
    int binary(int num)
    {
        if (num == 0)
        {
            return 0;
        }
        else
        {
            return (num % 2) + 10 * binary(num / 2);
        }
    }
