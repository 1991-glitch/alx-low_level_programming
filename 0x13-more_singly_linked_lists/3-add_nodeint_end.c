#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of the list
 *
 * @n: Data in the new node
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;
	newnode = malloc(sizeof(listint_t));
	{
		if (newnode == NULL)
		return NULL;
	}
	newnode->n = n;
	newnode->next = NULL;
	{
		if (*head == NULL)
			*head = newnode;
	}

	while (lastnode->next != NULL)
	{
		lastnode = lastnode-> next;
		lastnode->next = newnode;
	}
	return (newnode);
}
