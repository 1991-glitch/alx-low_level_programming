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
	ptr = malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
		ptr[i] = malloc(sizeof(int) * height);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	return (ptr);

	if (ptr == NULL)
		return (NULL);
	free(ptr);
}
