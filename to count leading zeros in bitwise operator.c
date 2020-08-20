#include <stdio.h>
#include <malloc.h>
int main()
{
	int lim = sizeof(int) * 8;
	// the mBit is 1000 0000 0000 0000 0000 0000 0000 0000
	int mBit = 1 << (lim - 1);
	int num = 0, count = 0;
	printf ("Enter the digit: ");
	scanf ("%d", &num);
	while (!(num & mBit))
	{
		num = (num << 1);
		count ++;
	}
	printf ("\nNumber of leading zero's is: %d\n", count);
	return 0;
}
//1. Take the input from the user and store it in the num variable. Leading zero’s in a binary number is equal to zeros preceding the highest order set bit of the number.
//2. int lim = sizeof(int) * 8; is used to find the total number of bits required to store an integer in memory.
//3. For Setting MSG, initialize a variable and set its MSB to 1. We can achieve this by using int mBit = 1 << (lim – 1);. So the mBit will be 10000000 00000000 00000000 00000000. It stores the number of leading zero’s in the variable count.
//4. While statement is used to find the leading set bit. If the leading set bit is found we terminate the loop, else right shift the bit by 1 and we increase the value of count by 1.
//5. Print the number of leading zero’s in the given number using print statement.
