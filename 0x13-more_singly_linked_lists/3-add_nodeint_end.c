#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of the list
 *@head: Pointer to the head node
 * @n: Data in the new node
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastnode = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	else
		return (NULL);

	if (lastnode != NULL)
	{
		while (lastnode->next != NULL)
			lastnode = lastnode->next;

		lastnode->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
