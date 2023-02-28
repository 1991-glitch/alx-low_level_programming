#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: Length of a string
 *
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
	}
	return (count);
}
