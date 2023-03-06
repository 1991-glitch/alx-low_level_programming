#include "main.h"

/*
 * _strpbrk - finds the first character in the string s that
 * matches specified character (bytes) in accept
 *
 * @s: string to be scanned
 * @accept: string containing characters to match
 *
 * Return: pointer to s or Null if character not foud
 */
char *_strpbrk(char *s, char *accept)
{int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
