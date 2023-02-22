#include "main.h"
/**
 *_abs checks for absolute value of an integer
 *
 *@n: parameter to be checked
 *
 *Return: always n
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
