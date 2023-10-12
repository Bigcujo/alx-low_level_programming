#include "main.h"
/**
 * print_sign - this prints the sign of a number
 * @n: the interger that will be checked
 * Return: 1 , 0 and -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
