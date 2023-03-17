#include<stdio.h>
/**
 * main - Print out the alphabet in lowercase
 (*
  * Return: 0 (Success)
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
