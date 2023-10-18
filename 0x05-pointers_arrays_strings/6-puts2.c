#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one character
 * @string: input
 * Return: void
 */
void puts2(char *string)
{
	int longi = 0;
	int r = 0;
	char *y = string;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	r = longi - 1;
	for (o = 0 ; o <= r ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(string[o]);
	}
	}
	_putchar('\n');
}

