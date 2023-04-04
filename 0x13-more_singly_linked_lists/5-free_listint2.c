#include "lists.h"

/**
 * free_listint2- function frees a list
 * @head: Head node
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}	*head = NULL;
}
