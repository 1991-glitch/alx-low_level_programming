#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns a pointer to a newly
 * allocated space in memory which contains a copy of the string str
 *
 * @str: Original string
 *
 * Return: NULL if str = NULL
 * On success a pointer to the duplicated string
 * NULL if insufficient memory is available
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	p = (char *) malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while ((p[i] = str[i]) != '\0')
	{
	i++;
	return (p);
	}
}
