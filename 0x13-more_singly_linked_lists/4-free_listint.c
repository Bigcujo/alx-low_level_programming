#include "lists.h"

/**
 * free_listint - frees a node in a linked list
 * @head: the node to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temps;
	while(head)
	{
		temps = head->next;
		free(head);
		head = temps;
	}
}
