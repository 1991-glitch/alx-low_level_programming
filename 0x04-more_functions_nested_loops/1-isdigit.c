#include "main.h"

/**
 *
 *_isdigit checks for a digit 
 *
 *@c: The parameter to check
 *
 *if c is a digit return 1 otherwise 0
 *
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		_putchar(c);
		return (1);
	else 
		return (0);
}
