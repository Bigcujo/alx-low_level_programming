#include "main.h"

/**
 * _pow - Calculates the power of a number.
 * @base: The base.
 * @power: The exponent.
 *
 * Return: The result of (base^power).
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int final = 1;

	for (; power > 0; power--)
	final *= base;

	return (final);
}

/**
 * print_binary - Prints a number in binary notation.
 * @n: The number to print.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor;
	int flag = 0;

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor > 0)
	{
	if (n & divisor)
	{
	flag = 1;
	_putchar('1');
	}
	else if (flag || divisor == 1)
	{
	_putchar('0');
	}
	divisor >>= 1;
	}
}

