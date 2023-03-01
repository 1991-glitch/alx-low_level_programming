#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - a function that reverses a string
 *
 *@s: pointer to the string
 */
void rev_string(char *s)
{
	int length;
	int i;
	char *begin_ptr, *end_ptr;
	char ch;

	length = strlen(s);

	begin_ptr = s;
	end_ptr = s + length - 1;
	for (i = 0; i < length /2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}
}

