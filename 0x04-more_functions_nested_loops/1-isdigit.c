#include "main.h"

/**
 * _isdigit- checks for a digit throught 0 to 9
 *
 *@c: The parameter to check
 *
 *Return: 1 if digit otherwise 0
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
