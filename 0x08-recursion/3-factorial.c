#include "main.h"

/**
 * factorial - returns the  factorial of a given number
 *@n: The number to return factorial from
 *
 * Return: The result
 */

int factorial(int n)
{
	if (n < 1)
	return (-1);
	if (n == 1)
	return (n);
	else
	return (n * (factorial(n - 1)));
}
