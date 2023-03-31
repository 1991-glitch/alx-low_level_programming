#include "lists.h"
#include <stdio.h>

/**
 * list_len - function returns the number of elements in a linked list
 *
 *@h: Pointer to the head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n_node;

	n_node = 0;

	while (h != NULL)
	{
		n_node++;
		h = h->next;
	}
	return (n_node);
}
