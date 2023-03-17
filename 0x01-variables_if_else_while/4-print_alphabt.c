#include<stdio.h>
/**
 * main - Print out the alphabet in lowercase expet q and e
 (*
  * Return: 0 (Success)
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
