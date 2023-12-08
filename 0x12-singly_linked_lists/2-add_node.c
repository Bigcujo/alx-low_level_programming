#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this funtion adds new node to the beginning of a linked list
 * @head: linked list with double pointer
 * @str: the new string to add to the node
 *
 * Return: it will return the address of new element if it fails then NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lent = 0;

	while (str[lent])
	lent++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->lent = lent;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

