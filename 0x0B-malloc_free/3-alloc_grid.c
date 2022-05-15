#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * alloc_grid - main functions
  * @width: width of the 2D array
  * @height: height of the 2D array
  * Return: a pointer to 2D array or NULL
  */

int **alloc_grid(int width, int height)
{
	int i, j, h;
	int **arrayTwoD;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrayTwoD = malloc(sizeof(int *) * height);
	if (arrayTwoD == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		arrayTwoD[h] = malloc(sizeof(int *) * width);
		if (arrayTwoD[h] == NULL)
		{
			while (h >= 0)
				free(arrayTwoD[h]);
			free(arrayTwoD);
			return (NULL);
		}
	}

	for (i = 0; i <= height; i++)
	{
		for (j = 0; j < width; j++)
			arrayTwoD[i][j] = 0;
	}
	return (arrayTwoD);
}
