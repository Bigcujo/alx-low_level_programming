#include "main.h"
/**
 * factorial- this will return the factorail of any figure
 * @s: this will take the integer we want to get the factorail of
 * Return: this will return -1 if the integer is less than 0
 */
int factorial(int s)
{
	if (s < 0)
	{
		return (-1);
	}
	if (s == 0)
	{
		return (1);
	}
	else
	{
		return (s * factorial(n - 1));
	}
}
