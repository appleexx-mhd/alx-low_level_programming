#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory
 * @b: nbr of bytes
 * Return: pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
