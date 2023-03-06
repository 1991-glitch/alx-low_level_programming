#include "main.h"

/**
 * _memset - function fills a block of  memory with a value
 *
 * @s: The address of the memory to be filled
 * * @b : value to be filled
 * @n : No of bytes to be filled starting with *s
 *
 * Return: char s after memory copy
 */
char *_memset(char *s, char b, unsigned int n)
{
	*s = b;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
