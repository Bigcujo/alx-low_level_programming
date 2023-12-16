#include "main.h"

/**
 * flip_bits - counts the number of bits to change in the programme
 * to get from one number to another
 * @n: first number to be taken
 * @m: second number to be taken
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f, countbits = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (f = 63; f >= 0; f--)
	{
	current = exclusive >> f;
	if (current & 1)
	countbits++;
	}

	return (countbits);
}

