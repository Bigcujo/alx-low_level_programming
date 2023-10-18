#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @g: value that will be swapped
 * @d: value that will be swapped
 */
void swap_int(int *g, int *d)
{
	int m;

	m = *g;
	*g = *d;
	*d = m;
}

