#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @f: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *f, int n)
{
	int counter;

	for (counter = 0; counter < (n - 1); counter++)
	{
		printf("%d, ", f[counter]);
	}
		if (counter == (n - 1))
		{
			printf("%d", f[n - 1]);
		}
			printf("\n");
}

