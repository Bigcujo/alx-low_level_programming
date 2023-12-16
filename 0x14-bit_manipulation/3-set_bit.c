#include "main.h"

/**
 * set_bit -This prog sets the value of a bit to 1 at a given index format.
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if an error occurred in the programme
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbits;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	setbits = 1 << index;
	*n = *n | setbits;
	return (1);
}

