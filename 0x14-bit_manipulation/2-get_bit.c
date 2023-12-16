#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check bits in.
 * @index: Index at which to check the bit.
 *
 * Return: Value of the bit at the specified index, or -1 if there is an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, checks;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);

	divisor = 1 << index;
	checks = n & divisor;

	return (checks == divisor ? 1 : 0);
}

