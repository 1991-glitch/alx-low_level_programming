#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to
 * a 2d array
 *
 * @width: array row
 * @height: array columns
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i = 0, j = 0;

	if (width == 0 || height == 0)
		return (NULL);
	if (width < 0 || height < 0)
		return (NULL);
	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr);
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
