#include "lists.h"
/**
 * sum_listint - Returns the sum of all the nth value in the linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data (n). If the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return sum;
}
