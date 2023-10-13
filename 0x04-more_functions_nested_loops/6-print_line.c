#include "main.h"
/**
 * print_line - this function will print lines
 * @n: this will represent the number of lne to be printed
 */
void print_line(int n)
{
	int r;

if (n > 0)
{
	for (r = 1; r <= n; r++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
else if (n <= 0)
{
	_putchar('\n');
}
	}
