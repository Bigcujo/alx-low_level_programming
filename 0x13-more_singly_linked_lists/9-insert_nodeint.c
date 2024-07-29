#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at the index position.
 * @head: pointer to the pointer of the head poniter..
 * @idx: Index of the list where the new node will be added.
 * @n: Integer to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *newNode, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	current = *head;
	for (count = 0; current != NULL && count < idx -1; count++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = current->next;
	current->next = newNode;
	
	return (newNode);
}

