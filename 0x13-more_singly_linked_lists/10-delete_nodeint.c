#include "lists.h"

/**
 * delete_nodeint_at_index - finds a given node in a linked list and deletes it.
 * @head : pointer to the head of the linked list
 * @index: index of the node to find (indices starting at 0)
 * Return: if it is sussecfull, -1 if not
 *
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);	
	}
	
	for (count = 0; current != NULL && count < index -1; count ++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return(1);
}
