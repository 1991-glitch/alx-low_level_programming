#include "lists.h"
#include <stdio.h>

/**
 *  list_len - function returns the number of elements in 
 *  a linked list
 *
 *@h: Pointer to the head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h);
{
	size_t n_node;
	
	h = h->str;
	while (h != NULL)
		h->str = h-> next;
			n_node++;
			return (n_node);
}
