#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **lastgrid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	lastgrid = malloc(height * sizeof(int *));
	if (lastgrid == NULL)
	{
		free(lastgrid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		lastgrid[i] = malloc(width * sizeof(int));
		if (lastgrid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(lastgrid[i]);
			free(lastgrid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			lastgrid[i][j] = 0;
	return (lastgrid);
}
