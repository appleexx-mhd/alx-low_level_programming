#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 */
void print_alphabet(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		_putchar(C);
		C++;
	}
	_putchar('\n');
}
