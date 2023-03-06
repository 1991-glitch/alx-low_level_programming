#include "main.h"

/*
 *_strstr - function searches for a given substring in the main string
 *
 *@haystack: main string
 *@needle: substring to be searched
 *
 *Return: pointer to the substring, if not present null
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
