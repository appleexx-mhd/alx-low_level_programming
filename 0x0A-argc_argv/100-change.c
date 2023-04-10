#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i;
	int index;
	int c[] = {25, 10, 5, 2, 1};
	int nbr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	index = atoi(argv[1]);

	if (index < 0)
	{
		printf("0\n");
		return (0);
	}
	nbr = 0;

	for (i = 0; i < 5; i++)
	{
		nbr += index / c[i];
		index %= c[i];
	}
	printf("%d\n", nbr);

	return (0);
}
