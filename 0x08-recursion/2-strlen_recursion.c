#include "main.h"
/**
 * _strlen_recursion - Returns the length os the string.
 * @s: The string we passed int the funtion that we want to measure
 * Return: this will return the length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}

