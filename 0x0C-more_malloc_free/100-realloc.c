#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pionter to the memory
 * @old_size: size of the memory
 * @new_size: new size of the new memory block
 * Return: pionter to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	char *ptr0;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pt = malloc(new_size);
	if (!pt)
		return (NULL);
	ptr0 = ptr;
	if (new_size < old_size)
	{
		for (i = 0 ; i < new_size ; i++)
			pt[i] = ptr0[i];
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
			pt[i] = ptr0[i];
	}
	free(ptr);
	return (pt);
}
