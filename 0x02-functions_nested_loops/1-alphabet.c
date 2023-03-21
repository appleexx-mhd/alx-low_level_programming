#include<stdio.h>
/**
 * print_alphabet - a prototype function
 *
 * Return Always 0 (Succes)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
