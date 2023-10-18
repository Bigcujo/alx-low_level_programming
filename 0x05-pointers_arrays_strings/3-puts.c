#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to standard output
 * @stri: string that will be printed out
 */
void _puts(char *stri)
{
	while (*stri != '\0')
	{
		_putchar(*stri++);
	}
		_putchar('\n');
}

