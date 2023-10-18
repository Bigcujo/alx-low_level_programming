#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @string: input
 * Return: void
 */
void puts_half(char *string)
{
	int a, n, longs;

	longs = 0;

	for (a = 0; string[a] != '\0'; a++)
		longs++;

	n = (longs / 2);

	if ((longs % 2) == 1)
		n = ((longs + 1) / 2);

	for (a = n; string[a] != '\0'; a++)
		_putchar(string[a]);
	_putchar('\n');
}

