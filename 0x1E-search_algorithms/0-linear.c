#include "search_algos.h"

int recurse_helper(int *arr, size_t size, int val, size_t items);

/**
 * linear_search - searching for a value in an integer array
 * @array: pointer to the array of ints
 * @size: size of the array
 * @value: value to be locate
 *
 * Return: index of value; -1 if value not found
 */
int linear_search(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	return (recurse_helper(array, size, value, 0));
}
/**
 * recurse_helper - recursive implement of linear search in an array
 * @arr: pointer to the array of ints
 * @size: size of the array
 * @val: value to be located
 * @items: current index been selected

 * Return: index of value; -1 if value not found
 */
int recurse_helper(int *arr, size_t size, int val, size_t items)
{
	if (items == size)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", items, arr[items]);

	if (arr[items] == val)
		return (items);

	return (recurse_helper(arr, size, val, items + 1));
}
