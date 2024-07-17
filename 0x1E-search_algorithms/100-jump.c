#include "search_algos.h"

int recurse_helper(int *array, size_t size, size_t step, size_t item, int val);
int subrecurse_help(int *array, size_t size, size_t end, size_t item, int val);

/**
 * jump_search - perform jump search
 * @array: pointer to first elem of array
 * @size: number of elems in array
 * @value: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_helper(array, size, sqrt(size), 0, value));
}

/**
 * recurse_helper - recursive implement of jump search
 * @array: array to search
 * @size: size of array
 * @step: jump increment
 * @item: current index for comparison
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int recurse_helper(int *array, size_t size, size_t step, size_t item, int val)
{
	printf("Value checked array[%lu] = [%d]\n", item, array[item]);

	/* if value is greater, jump forward */
	if (((item + step < size) && array[item + step] < val))
		return (recurse_helper(array, size, step, item + step, val));

	/* recurse subarray */
	printf("Value found between indexes [%lu] and [%lu]\n", item, (item + step));
	return (subrecurse_help(array, size, item + step, item, val));
}

/**
 * subrecurse_help - recursive implement for recursive implement
 * @array: array to search
 * @size: size of array
 * @end: end of subarray
 * @item: current index for comparison
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int subrecurse_help(int *array, size_t size, size_t end, size_t item, int val)
{
	if (item >= size || item > end || array[item] > val)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", item, array[item]);

	if (array[item] == val)
		return (item);
	else
		return (subrecurse_help(array, size, end, item + 1, val));
}
