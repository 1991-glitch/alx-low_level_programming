#include "lists.h"

/**
 * pop_listint - function deletes the head node of a list 
 * @head: The head
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;
	
	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);


	return (n);
}
