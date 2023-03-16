#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 *
 * @b: Number of bytes needed
 *
 * Return: On success pointer to allocated memory
 * On error terminate with a status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
