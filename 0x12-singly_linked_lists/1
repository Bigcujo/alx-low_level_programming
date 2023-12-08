#include <stdio.h>
#include "lists.h"

/**
 * print_list - this functions will print all the values in the linked list
 * @d: this is a poointer to the linked list
 * @h: condidtion to me met
 * Return: this will return the number of nodes to be printed
 */
size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	d++;
	}

	return (d);
}

