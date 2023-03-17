#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of integers
 *
 * @min: Range of values
 * @max: Range of values
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, size;


	if (min > max)
		return (NULL);

	size = max - min + 1;
	a = (int *) malloc((size) * sizeof(int));
		for (i = 0; min <= max; i++)
			a[i] = min++;
		return (a);
			if (a == NULL)
				return (NULL);
			return (0);
}


