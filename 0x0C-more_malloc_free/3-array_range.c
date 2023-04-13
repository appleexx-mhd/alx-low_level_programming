#include <stdlib.h>
#include "main.h"
/**
 * *array_range - craetes an array of intergers
 * @min: minimum range of values stored
 * @max: maximum range of values to be stored
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	ptr = malloc(sizeof(int) * s);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		ptr[i] = min++;
	return (ptr);
}
