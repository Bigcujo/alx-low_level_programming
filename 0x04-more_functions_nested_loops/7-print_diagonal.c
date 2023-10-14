#include "main.h"
/**
 * print_diagonal - this function will print diagonal lines
 * @n: this will represent the number of lne to be printed
 */
void print_diagonal(int n)
{

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int f, j;

	for (f = 0; f < n; f++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == f)
				_putchar('\\');
			else if (j < f)
				_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
