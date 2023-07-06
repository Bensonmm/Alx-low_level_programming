#include "main.h"

/**
 * get_bit - Returns the Value of a bit at an index in a Decimal Number
 * @n: Number to Search
 * @index: Index of the Bit..
 * Return: Value of the Bit..
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
