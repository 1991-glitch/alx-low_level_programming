#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: no of bytes in each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);
	p =  malloc(nmemb * size);
		return (p);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < (nmemb * size); i++)
			p[i] = 0;
	return (0);
}
