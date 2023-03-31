#include "lists.h"

/**
 * add_node - functions adds a new node at the beginning
 * of a list
 *
 * @head: Pointer to a pointer to the head of the list
 * @str: Pointer to a string
 *
 * Return: Pointer to the new node or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{list_t *new;
    size_t nchar;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);

    for (nchar = 0; str[nchar]; nchar++)
        ;

    new->len = nchar;
    new->next = *head;
    *head = new;

    return (*head);
}
