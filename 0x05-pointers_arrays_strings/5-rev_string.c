#include "main.h"

/**
 * rev_string - a function that reverses the string
 *
 * @s: pointer to the string
 */
void rev_string(char *s)
{

int len, i;
len = 0;

while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
