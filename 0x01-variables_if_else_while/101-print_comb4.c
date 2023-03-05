#include <stdio.h>
/*
 * main - function prints all possible combinations of 3 digits
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i;
	int k;
	int j;

	for (i = '0'; i < '8'; i++)
	{
	for (k = i + 1; k < '9'; k++)
	{
	for (j = k + 1; j <= '9'; j++)
	{
	if ((i != k) != j)
	putchar(i);
	putchar(k);
	putchar(j);
	putchar(',');
	putchar(' ');
	}
	if (i == '7' && k == '8')
	break;
	}
	}
	return (0);
}

