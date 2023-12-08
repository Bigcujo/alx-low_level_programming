#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this will add a new node at the end of a linked list
 * @head: this is a double pointer to the linked list
 * @str: the string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *templist = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	newlist = malloc(sizeof(list_t));
	if (!newlist)
	return (NULL);

	newlist->str = strdup(str);
	newlist->len = len;
	newlist->next = NULL;

	if (*head == NULL)
	{
	*head = newlist;
	return (newlist);
	}

	while (templist->next)
	templist = templist->next;

	templist->next = newlist;

	return (newlist);
}

