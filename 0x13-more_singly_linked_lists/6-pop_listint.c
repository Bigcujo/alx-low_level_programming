#include "lists.h"
/**
 * pop_listint - deletes only the head node.
 * @head : this is the pointer to the head node.
 * Return: this will return the n value in the head node or 0 if the linked list empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
