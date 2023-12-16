#include "main.h"

/**
 * binary_to_uint - this function changes a binary number to an unsignned int
 * @b:  The Pointer to the string containing a binary number.
 *
 * Return: Unsigned int with the decimal value of the binary number,
 *         or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int result = 0;

	if (!b)
	return (0);

	for (u = 0; b[u] != '\0'; u++)
	{
	if (b[u] != '0' && b[u] != '1')
	return (0);
	}

	for (u = 0; b[u] != '\0'; u++)
	{
	result <<= 1;
	if (b[u] == '1')
	result += 1;
	}

	return (result);
}
