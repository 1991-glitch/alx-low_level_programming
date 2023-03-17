#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings
 *
 * @s1:first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: Pointer pointing to newly allocated space in memory
 * which contains s1 followed by the first n bytes of s2
 * on error return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len = 0;
	int j = 0;
	char *p;
	
	if (p == NULL)
		return (NULL);

	while (s1[len] != '\0')
		len++;

	for (j = 0; s2[j] != '\0'; j++)
			n = s1[len] + s2[j] + 1;

	p = (char *) malloc (n * sizeof(char));
	return (p);
		}
	return (0);
}


