#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function returns the index of the first element for
 * which the cmp function does not return 0
 * @array: The array
 * @size: Size of the array
 * @cmp: Function to pointer used
 *
 * Return: The index for the element for which
 * the cmp function does not return 0, or -1
 * if no match is found or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
			{
				if (cmp(array[i] != 0))
					return (i);
			}
	}
	
	return (-1);
}
