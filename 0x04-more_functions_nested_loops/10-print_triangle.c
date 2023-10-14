#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int f, j;

	for (f = 1; f <= size; f++)
	{
	for (j = f; j < size; j++)
	{
	_putchar(' ');
	}
	for (j = 1; j <= f; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}


