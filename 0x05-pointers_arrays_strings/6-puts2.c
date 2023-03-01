#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of a string
* followed by a new line
* @str: string to be printed
*/

void puts_half(char *str)
{

	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}

	putchar('\n');
}
