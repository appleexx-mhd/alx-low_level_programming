#include<stdio.h>
/**
 * main - Print out all the digit of base 10 using putchar
 (*
  * Return: 0 (Success)
  */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
