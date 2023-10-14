#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int d;

	if (n < 0)
	{
	d = -n;
	_putchar('-');
	}
	else
	{
	d = n;
	}
	if (d / 10)
	{
	print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
