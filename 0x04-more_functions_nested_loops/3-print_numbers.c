#include "main.h"
/**
 * print_numbers -  function that prints the numbers
 *
 *Return: numbers if correct
 */
void print_numbers(void)
{

	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
