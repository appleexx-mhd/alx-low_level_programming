#include<stdio.h>
/**
 * main - Print out all single digit numbers of base 10
 (*
  * Return: 0 (Success)
  */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
