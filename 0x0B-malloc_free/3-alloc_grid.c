#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop make grid
 * @width: input
 * @heigth: input
 * Return: 2 dim array
 */
int **alloc_grid(int width, int heigth)
{
	int **c;
	int x;
	int i;

	if (width <= 0 || heigth <= 0)
		return (NULL);
	c = malloc(sizeof(int *) * heigth);
	if (c == NULL)
		return (NULL);
	for (x = 0 ; x < heigth ; x++)
	{
		c[x] = malloc(sizeof(int) * width);
		if (c[x] == NULL)
		{
			for (; x >= 0 ; x--)
				free(c[x]);
			free(c);
			return (NULL);
		}
	}
	for (x = 0 ; x < heigth ; x++)
	{
		for (i = 0 ; i < width ; i++)
			c[x][i] = 0;
	}
	return (c);
}
