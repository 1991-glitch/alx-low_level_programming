#include "main.h"

/**
 * _pow_recursion - prints the result of base no raised to power of exponent no
 *
 * @x: Base number
 * @y: exponent number
 *
 * Return: Result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
