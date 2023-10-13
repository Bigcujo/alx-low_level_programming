#include "main.h"
/**
 * print_most_numbers - this will print number from 0 to 9 wihout 2 and 4
 * _putchar: this print out the number
 */
void print_most_numbers(void)
{
	int s;

	for (s = 0; s <= 9; s++)
	{
		if (s != 2 && s != 4)
		{
			_putchar('0' + s);
		}
	}
	_putchar('\n');
}

