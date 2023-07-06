#include "main.h"

/**
 * get_endianness - Checks if a Machine is Little or Big Endian.
 * Return: 0 for Big, 1 for Little
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *h = (char *) &z;

	return (*h);
}
