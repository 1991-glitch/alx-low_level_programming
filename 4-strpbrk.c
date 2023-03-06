#include "main.h"

/*
 * _strpbrk - finds character in str1 that matches character specified in str2
 *
 * @s: input
 * @accept: 
 *
 * Return: pointer to the character
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	{
		for (i = 0; accept[i]; k++)
		{
			if (*s == accept[i])
				return (s);
				s++;
		}
		return ('\0');
	}
}
