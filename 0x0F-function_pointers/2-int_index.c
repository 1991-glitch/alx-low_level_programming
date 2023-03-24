#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - function returns the index of the first element for
 * which the cmp function does not return 0
 * @array: The array
 * @size: Size of the array
 * @cmp: Function to pointer used
 *
 * Return: The index for the element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size == 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
		{
			return (i);
		}

	return (0);

}
