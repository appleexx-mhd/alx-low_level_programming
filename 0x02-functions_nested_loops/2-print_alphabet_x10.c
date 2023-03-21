#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercese
 */
void print_alphabet_x10(void)
{
	char C = 'a';
	int i = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		C = 'a';
		while (C <= 'z')
		{
			_putchar(C);
			C++;
		}
		_putchar('\n');
	}
}
