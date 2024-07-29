#include "lists.h"
/**
 * get_nodeint_at_index - serachs for a given node in a linked list.
 * @head : the head pointer of the linked list
 * @index: index of the node being searched for.
 * Return: this returns the pointer to the index node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}

	return (NULL);
}
