#include <stdlib.h>
#include "main.h"
/**
 * *_const - files memory with a constant bytes
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory
 */
char *_const(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of element in the array
 * @size: size of each element
 * Return: pionter to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_const(ptr, 0, nmemb * size);
	return (ptr);
}
