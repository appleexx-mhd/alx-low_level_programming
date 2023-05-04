#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: string
 * Return: the convert number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (i = 0 ; b[i] ; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}
	return (value);
}
