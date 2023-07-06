#include "main.h"

/**
 * flip_bits - Counts the Number of Bits to Change
 * To get from one number to another
 * @n: First Number
 * @m: Second Number
 * Return: Number of Bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		current = exclusive >> z;
		if (current & 1)
			count++;
	}

	return (count);
}
