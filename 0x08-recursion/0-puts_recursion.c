#include "main.h"
/*
 * _puts_recursion - function writes a string with newline
 *
 * @s: pointer to the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s)
	{
		_puts_recursion(s);
			_putchar('s');
	}
}
