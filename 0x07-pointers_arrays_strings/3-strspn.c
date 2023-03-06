#include "main.h"

/**
 * _strchr - function locates a character in a string
 *
 * @s: The string to be scanned
 * @c: The character to be scanned
 *
 * Return: First occurence of the character c and
 *      Null if character is found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

