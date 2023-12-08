#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this funtion returns the number of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: the returns the number of elemtents in @h
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
	e++;
	h = h->next;
	}
	return (e);
}

