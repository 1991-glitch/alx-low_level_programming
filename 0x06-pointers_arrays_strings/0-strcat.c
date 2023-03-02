#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concatenates the string pointed to by @src,
 *          to the end of the string pointed to by @dest.
 * @dest : pointer destination
 * @src : pointer source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
