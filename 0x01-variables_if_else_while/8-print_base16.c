#include<stdio.h>
/**
 *  main - Print out all the numbers of base 16
 (*
  * Return: 0 (Success)
  */
int main(void)
{
	int i = '0';
	char T = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (T <= 'f')
	{
		putchar(T);
		T++;
	}
	putchar('\n');
	return (0);
}
