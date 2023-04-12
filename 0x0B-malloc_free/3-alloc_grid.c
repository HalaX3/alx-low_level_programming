#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2d array as a pointer
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **ptr2D;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr2D = malloc(sizeof(int *) * height);

	if (ptr2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr2D[i] = malloc(sizeof(int) * width);

		if (ptr2D[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr2D[i]);

			free(ptr2D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		ptr2D[i][j] = 0;
	}

	return (ptr2D);
}
