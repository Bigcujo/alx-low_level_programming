#include "lists.h"
/**
 * free_listint2 - free the whole linked list
 * @head: head pointer to the linked list
 * Return: it return nothing
 */
void free_listint2(listint_t **head)
{
	listint_t  *temp;

	if (head != NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
