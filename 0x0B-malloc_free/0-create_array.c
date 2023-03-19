#include "main.h"
#include <stdlib.h>
/**
 *  create_array - creates an array of characters and
 * initializes with a specific char
 *
 * @c: char to  initialize the array c
 *@size: size of the array to create
 *Return: NULL if space is zero
 * or pointer to the array on success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
