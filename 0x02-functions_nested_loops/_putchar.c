#include "main.h"
#include <unistd.h>
/**
 * _putchar - This will write the character to standard output
 *
 * @c: The character to print
 *
 * Return: this will always return 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
