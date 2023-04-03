#include "lists.h"
#include <stddef.h>

/**
 * print_listint - function prints all elements of a list
 *
 * @h: Head node
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp  = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
