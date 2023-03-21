#include<stdio.h>
/**
 * print_alphabet_x10 - print alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		c = 'a';
		while (c <= z)
		{
			putchar(c);
			c++;
		}
		putchar('\n');
	}
	return (0);
}
/**
 * main - check the code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
