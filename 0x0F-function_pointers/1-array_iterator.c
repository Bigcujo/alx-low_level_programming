#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this takes each elements of an array
 * and attach it to a function
 * @array : the array to be used
 * @size : the size of
 * @action : this takes the function to be used
 * Return : it wont return anything
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (array != NULL || action != NULL)
	{
	for (s = 0; s < size; s++)
	{
		action(array[s]);
	}
	}
}
