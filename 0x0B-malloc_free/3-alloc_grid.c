#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **sad;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	sad = malloc(sizeof(int *) * height);

	if (sad == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		sad[x] = malloc(sizeof(int) * width);

		if (sad[x] == NULL)
		{
			for (; x >= 0; x--)
				free(sad[x]);

			free(sad);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			sad[x][y] = 0;
	}

	return (sad);
}
