#include "main.h"
/**
 * _pow_recursion - this will return an integer raise to the power of the
 * the other integer
 * @a: this will be the value to be raised
 * @b: this will be the integer that will determine the value it will be
 * raised to.
 * Return: if @b is lower than 0 it will return -1.
 */
int _pow_recursion(int a, int b);
{
	if (b < 0)
	{
		return (-1);
	}
	if (b == 0)
	{
		return (1);
	}
	else
	{
		return (a * _pow_recursion(a, b - 1));
	}
}
