#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int f;
	int s;

	for (f = 0; f < n--; f++)
	{
		s = a[f];
		a[f] = a[n];
		a[n] = s;
	}
}
