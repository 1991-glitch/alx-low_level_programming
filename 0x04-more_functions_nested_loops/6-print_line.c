#include "main.h"
/**
 * print_line - function that draws a straight line
 *
 * @n: The character to print
 *
 * Return: a straight line
 */
void print_line(int n)
{
	int length;

	if (n > 0)
		for (length = 0; length < n; length++)
			_putchar('_');
	_putchar('\n');
}
