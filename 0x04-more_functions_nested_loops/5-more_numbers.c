#include "main.h"
/**
 * more_numbers - this function will print the numbers from 0 to 14
 */
void more_numbers(void)
{
	int f;
	int h;

	for (f = 0; f < 10; f++)
	{
	for (h = 0; h <= 14; h++)
		{
	if (h >= 10)
	_putchar('1');
	_putchar(h % 10 + '0');
		}
		_putchar('\n');
	}
}
