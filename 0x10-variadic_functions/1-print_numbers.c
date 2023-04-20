#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Print numbers, followed by new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable number of number to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nm;
	unsigned int i;

	va_start(nm, n);

	for (i = 0 ; i < n ; i++)
	{
		unsigned int x = va_arg(nm, int);

		printf("%d", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nm);
}
