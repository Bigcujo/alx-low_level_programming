#include "search_algos.h"

int recurse_helper(int *array, size_t left, size_t right, int value);

/**
 * binary_search - search for value in array of sorted ints
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: index of found value; or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_helper(array, 0, size - 1, value));
}

/**
 * recurse_helper - recursive implement of binary search
 * @array: array to search
 * @start: first index in the array
 * @end: last index in the array
 * @value: value to search
 *
 * Return: index of found value; or -1 if not found
 */
int recurse_helper(int *array, size_t start, size_t end, int item)
{
	size_t i = start, mid;

	if (start > end)
		return (-1);

	/* print search progress */
	printf("Searching in array: %d", array[i++]);
	while (i <= end)
		printf(", %d", array[i++]);
	printf("\n");

	/* calculate mid */
	mid = start + ((end - start) / 2);

	/* check if mid is value */
	if (array[mid] == item)
		return (mid);
	else if (array[mid] > item)
	{
		if (mid != 0)
			return (recurse_helper(array, start, mid - 1, item));
		else
			return (-1);
	}
	else
		return (recurse_helper(array, mid + 1, end, item));
}
