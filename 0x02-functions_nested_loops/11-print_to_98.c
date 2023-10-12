#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all the numbers from n to 98,
 * followed by a new line character
 * @n: print from this number
 */
void print_to_98(int n)
{
	int f;
	int v;

	if (n <= 98)
	{
		for (f = n; f <= 98; f++)
		{
			if (f != 98)
				printf("%d, ", f);
			else if (f == 98)
				printf("%d\n", f);
		}
	} else if (n >= 98)
	{
		for (v = n; v >= 98; v--)
		{
			if (v != 98)
				printf("%d, ", v);
			else if (v == 98)
				printf("%d\n", v);
		}
	}
}

