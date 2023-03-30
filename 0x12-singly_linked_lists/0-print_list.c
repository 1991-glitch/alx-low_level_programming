#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - function prints all the elements of a list
 *
 * @h:Pointer to the head of a singly linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	int count;
	
	while (h != NULL)
	{
		if (h-> str == NULL)
	
			printf("[%d] %s\n",0,"(nil)";
		
		else 
			printf("[%d] %s", h -> len, h -> str);
		h = h -> next;
		count++;
	}
	return (count);
}
