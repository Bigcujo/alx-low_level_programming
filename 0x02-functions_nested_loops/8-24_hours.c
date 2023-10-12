#include "main.h"
/**
 * jack_bauer - This function prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int d, g;

	d = 0;

	while (d < 24)
	{
		g = 0;
		while (g < 60)
		{
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar(':');
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar('\n');
			g++;
		}
		d++;
	}
}

