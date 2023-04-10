#include <stdio.h>
#include <stdlib.h>

/**
 * check - check - string there are digit
 * @str: array str
 *
 * Return: the int converted from the string
 */

int check(char *str)
{
	int x;
	int num = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] < '0' || str[x] > '9')
		{
			return (-1);
		}
		num = num * 10 + (str[x] - '0');
	}
	return (num);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int sm = 0;
	int i, nm;

	for (i = 1; i < argc; i++)
	{
		nm = check(argv[i]);
		if (nm == -1)
		{
			printf("Error\n");
			return (1);
		}
		sm += nm;
	}
	printf("%d\n", sm);
	return (0);
}
