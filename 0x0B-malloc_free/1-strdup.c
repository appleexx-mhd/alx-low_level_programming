#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Duplicate to new memory allocation
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *x;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	x = malloc(sizeof(char) * (i + 1));
	if (x == NULL)
		return (NULL);
	for (j = 0 ; str[j] ; j++)
	{
		x[j] = str[j];
	}
	return (x);

}
