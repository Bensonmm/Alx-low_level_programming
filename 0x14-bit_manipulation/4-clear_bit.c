#include "main.h"

/**
 * clear_bit - Sets the Value of a given Bit to 0.
 * @n: Pointer to the Number to Change
 * @index: Index of the Bit to Clear
 * Return: 1 for Success, -1 for Failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
