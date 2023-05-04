#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int len;
	unsigned long int ex = n ^ m;

	for (i = 63 ; i >= 0 ; i--)
	{
		len = ex >> i;
		if (len & 1)
			cnt++;
	}
	return (cnt);
}
