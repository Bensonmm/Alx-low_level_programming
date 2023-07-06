
#include "main.h"


/**
 * print_binary - Binary Representation..
 * @n: Argumentfirst..
 * Return: Return Zero if not..
 */

void print_binary(unsigned long int n)
{
	int new_elem_data;

	static int len;

	if (n == 0 && len > 0)
		{
			return;
		}
		else if (n == 0)
		{
			_putchar('0');
			return;
		}
	new_elem_data = (n & 1);
	len++;
	print_binary(n >>= 1);
	_putchar('0' + new_elem_data);
}

