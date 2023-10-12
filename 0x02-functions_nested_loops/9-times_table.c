#include "main.h"

/**
 * times_table -This function prints the 9 time table, starting with 0
 */
void times_table(void)
{
	int r;
	int g;
	int h;

	for (r = 0; r < 10; r++)
	{
		for (g = 0; g < 10; g++)
		{
			h = g * r;
			if (g == 0)
			{
				_putchar(h + '0');
			}

			if (h < 10 && g != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(h + '0');
			} else if (h >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

