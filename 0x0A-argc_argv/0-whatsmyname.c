#include <stdio.h>
#include "main.h"
/**
 * main - print the name of program
 * @argc: nbr of arguments
 * @argv: array of arguments
 * Return: Alaways 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
