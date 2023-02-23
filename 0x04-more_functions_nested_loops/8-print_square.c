#include "main.h"

/**
 * print_square - function prints a square
 *
 * @size: is the size of the square
 *
 *Return: a printed square
 *
 */
void print_square(int size)
{
	int length;
	int width;

	if (size > 0)


	for (length = 0; length <= size; length++)
	{
		for (width = 0; width <= size; width++)
			_putchar('#');
		if (length == size - 1)
			continue;
		_putchar('\n');
	}
	_putchar('\n');
}

