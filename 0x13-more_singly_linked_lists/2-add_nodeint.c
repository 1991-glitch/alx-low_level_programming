#include "lists.h"

/**
 * add_nodeint - function adds node at the beginning of a list
 *
 *@n: Data for the new node
 *
 * Return: Address of the new element or Null on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	{
		if (newnode == NULL)
		return NULL;
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);

}
