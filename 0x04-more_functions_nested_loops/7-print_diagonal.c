#include "main.h"
/**
 * print_diagonal - this function will print diagonal lines
 * @n: this will represent the number of lne to be printed
 */
void print_diagonal(int n)
{
	int r;

if (n > 0)
{
	for (r = 1; r <= n; r++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
else if (n <= 0)
{
	_putchar('\n');
}
	}
