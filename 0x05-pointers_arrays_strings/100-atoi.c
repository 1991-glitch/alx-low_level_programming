#include "main.h"
#include <stdio.h>

/**
 *_atoi - converts a string to an integer
 *
 *@s: The string to be converted
 *
 *Return: The integer value for converted string
 */
int _atoi(char *s)
{
	int index = 1;
	int number = 0;

	do {
		if (*s == '-')
			index = -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	}	while (*s++);
	return (number * index);
}
