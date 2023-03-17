#include<stdio.h>
#include<ctype.h>
/**
 * main - Pint out the alphabet in lowercase then uppercase
 (*
  * Return: O (Success)
  */
int main(void)
{
	char c = 'a';
	char result;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'z')
	{
		result = toupper(c);
		putchar(result);
		c++;

	}
	putchar('\n');
	return (0);
}
