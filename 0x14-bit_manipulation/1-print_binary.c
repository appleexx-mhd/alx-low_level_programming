#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: input
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int len;

	for (i = 63; i >= 0 ; i--)
	{
		len = n >> i;
		if (len & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
	}
	if (!len)
		_putchar('0');
}
