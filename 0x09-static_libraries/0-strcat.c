#include "main.h"
 /**
 * _strcat - function concatenates two strings and ends
 * the resulting string s stored in the dest string
 * @dest: input value
 * @src: input value
 *
 * Return: A string to be stored in destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
