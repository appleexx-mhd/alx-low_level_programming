#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: The number of parameters passed to the function
 * @...: A variable number of parameters to calculate the sum
 * Return: 0 if n == 0 Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ll;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ll, n);
	for (i = 0 ; i < n ; i++)
	{
		unsigned int x = va_arg(ll, int);

		sum += x;
	}
	va_end(ll);
	return (sum);
}
