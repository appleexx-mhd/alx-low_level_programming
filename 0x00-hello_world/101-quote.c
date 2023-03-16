#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 *
 * Return: 1  (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
