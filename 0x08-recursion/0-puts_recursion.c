#include "main.h"
/**
 * _puts_recursion - this will keep on printing the charaters until it
 * gets to the last null charater and the prints a new charater
 * @s: this will be the string input.
 * Return : return is void.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
