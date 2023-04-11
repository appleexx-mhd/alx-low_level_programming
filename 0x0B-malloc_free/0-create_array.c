#include "main.h"
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: input
 * @c: input char
 *
 * Return: pointer to array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	x = malloc(sizeof(char) * size);
	if (size == 0 || x == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
		x[i] = c;
	}
	return (x);
}
