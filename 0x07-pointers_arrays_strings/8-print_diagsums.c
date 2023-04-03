#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum, sum1, x;

	sum = 0;
	sum1 = 0;

	for (x = 0; x < size; x++)
	{
		sum = sum + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sum1 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
