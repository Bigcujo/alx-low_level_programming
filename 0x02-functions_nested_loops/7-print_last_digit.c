#include "main.h"
/**
 * print_last_digit - this function will print out the last digit of a number
 * @g: this collects the integer value
 * Return: this will return the last digit of a number
 */
int print_last_digit(int g)
{
	int d;

	if (g < 0)
	{
		g = -g;
	}
	d = g % 10;
	if (d < 0)
	{
	d = -d;
	}
	_putchar(d + '0');
	return (d);

}
