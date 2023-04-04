#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *new_node = head;

	for (i = 0; i < index && new_node != NULL; i++)
	{
		new_node = new_node->next;
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	return (new_node);
}
