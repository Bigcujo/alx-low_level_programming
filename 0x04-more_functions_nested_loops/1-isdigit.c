#include "main.h"
/**
 * _isdigit.c - this will check for a digit from 0 -9 
 * @c: this is used to represent the number we are to check for
 * Return: this will return 1 is c is a digit or 0 if it's otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
