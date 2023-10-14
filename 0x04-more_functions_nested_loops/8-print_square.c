#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e;
		int f;

		for (e = 0; e < size; e++)
		{
			for (f = 0; f < size; f++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
