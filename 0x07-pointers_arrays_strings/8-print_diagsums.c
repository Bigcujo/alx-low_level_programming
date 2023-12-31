#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function
  *
  * @size: function parameter
  *
  * @a: function parameter
  *
  * Return: Always 0.
  */

void print_diagsums(int *a, int size)
{
	int counts1;
	int counts2;
	int i;

	counts1 = 0;
	counts2 = 0;

	for (i = 0; i < size; i++)
	{
	counts1 = counts1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
	counts2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", counts1, counts2);
}

