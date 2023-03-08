#include "main.h"

/*
 *_ factorial - print the factorial of a given number
 *@n: The number to return factorial from
 *
 * Return: The factorial of n
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
