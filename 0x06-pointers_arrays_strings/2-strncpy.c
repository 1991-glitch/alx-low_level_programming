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
	for (n = 0; dest [n] != '\0'; n++)
	{
		dest [n] = src [n];
			return(src);
	}
	src [n] = '\0';
	return (0);
}
