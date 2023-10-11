#include "main.h"
/**
 * print_alphabet_x10 - prints out the alphabets in lower case ten times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);	
	}
	_putchar('\n');
	}
}
