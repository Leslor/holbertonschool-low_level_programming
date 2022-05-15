#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * free_grid - Funciton that free a 2d array
  * @grid: doble pointer to the array
  * @height: height of the 2D array
  * Return: void function
  */

void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height <= 0)
		return;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
