#include "function_pointers.h"
/**
 * int_index - return index place if comparison meets the if statement 
 * @array: array to be used
 * @size: size of the array
 * @cmp: poointer to be uesed for comparison
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
	return(-1);
	}
	else
	{
	for (a= 0; a < size; a++)
	{
	if(cmp(array[a]))
	{
	return(a);
	}

	}
	return(-1);
	}
}
