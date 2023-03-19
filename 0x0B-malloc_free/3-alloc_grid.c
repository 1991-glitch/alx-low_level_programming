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
	int *arr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count ;
	
	if (width == 0 && height == 0)
		return (NULL)
	if (width < 0 && height < 0)
		return (NULL)
	**arr = (int**) malloc (width * sizeof(int*));
	for (i = 0; i < width; i++)
		arr[i] =(int *) malloc(height * sizeof(int));
	count = 0;
	for (i = 0;i < width; i++)
		for (j = 0;j < height;j++)
		return (arr);
}	

