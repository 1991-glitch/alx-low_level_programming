#include "main.h"

/**
 * rot13 - a function to encode a string
 *
 * @s pointer to the array to encode
 *
 * Return: The encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;

	for (i = 97; ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90)) ; i++)
	{
		if (s[i] = (s[i] - (97 + 13) % 26 = 97)
					char p = s[i];
		Return(p);
	}

}
