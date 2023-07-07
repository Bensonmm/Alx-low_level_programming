
#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");  /* Base case: n is zero */
		return;
	}

	/* Find the most significant bit position */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0 && (n & mask) == 0)
	{
		mask >>= 1;
	}

	/* Print the binary representation */
	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		mask >>= 1;
	}
}

