#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
	listint_t *new, *tmp = *h, *head = *h;

	if (!h)
		return (NULL);
	while (head && i < idx)
	{
		tmp = head;
		head = head->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = head;
		if (tmp == head)
			*h = new;
		else
			tmp->next = new;
	}

	return (new);
}
