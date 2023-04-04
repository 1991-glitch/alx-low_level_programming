#include "lists.h"

/**
 * *reverse_listint - function reverses a lined list
 * @head: Pointer to pointer to the head
 * Return: A pointer to the first node of reversed string
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}
	return (last);
}

