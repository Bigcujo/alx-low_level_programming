#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @d: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *d)
{
 size_t nums = 0;

 while (d)
 {
 printf("%d\n", d->n);
 nums++;
 d = d->next;
 }

 return (nums);
}

