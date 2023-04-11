#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @heigth: heigth dim of grid
 * Return: void
 */
void free_grid(int **grid, int heigth)
{
	int i;

	for (i = 0 ; i < heigth ; i++)
		free(grid[i]);
	free(grid[i]);
}
