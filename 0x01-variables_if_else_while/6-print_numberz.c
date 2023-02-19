#include <stdio.h>

/**
 * main - Numberz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	for (c = 0; c <= 9; c++)
	putchar ((c % 10) + '0');
	putchar ('\n');
	return (0);
}
