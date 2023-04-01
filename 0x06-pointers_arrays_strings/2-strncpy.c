#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: pointer to destination array where the contect is to be copied
 * @src: The string to be copied
 * @n: Number of characters to be copied from source
 *
 * Return: The pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)

		dest[i] = '\0';
	return (dest);
}
