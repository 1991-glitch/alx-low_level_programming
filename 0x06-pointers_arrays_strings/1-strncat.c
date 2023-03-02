#include "main.h"

/**
 * _strncat - Concatenates two strings using n bytes
 * @dest: src string is appended to it
 * @src: gets appended to dest string
 * @n: Number of bytes of src to be concatenated with dest
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
