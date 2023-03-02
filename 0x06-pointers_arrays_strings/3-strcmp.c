#include "main.h"

/**
 * _strcmp - function compares 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are the same,1 or -1 if not
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0;
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			flag = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
		i++;
	}
	return (flag);
}
