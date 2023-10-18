#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @string: string to be taken
 * return: void
 */
void print_rev(char *string)
{
	int longi = 0;
	int i;

	while (*string != '\0')
	{
		longi++;
		string++;
	}
	string--;
	for (i = longi; i > 0; i--)
	{
		_putchar(*string);
		string--;
	}

	_putchar('\n');
}

