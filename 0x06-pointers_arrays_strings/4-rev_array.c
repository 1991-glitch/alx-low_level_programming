#include "main.h"
/**
 * reverse_array - reverses contents of the array of integers
 * @a: an array of integers
 *@n : number of elements of the array
 *Return :reversed contents
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;
	int k;

	i = 0;
	x = n - 1;

	while (i < x)
	{
		k = a[i];
		a[i] = a[x];
		a[x] = k;
		i++;
		x--;
	}
}
