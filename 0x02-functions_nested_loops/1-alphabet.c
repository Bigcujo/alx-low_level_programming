#include "main.h"
/**
 * print_alphabet - this will print he alphabets to standard output
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char i;
	for ( i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
