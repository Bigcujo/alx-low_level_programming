#include "main.h"

/**
 * _islower - This function checks if the alphabet is lower case
 * @r: is the char to be checked
 * Return: 1 if char is lowercase, else it's going to print 0.
 */

int _islower(int r)
{
	if (r >= 'a' && r <= 'z')
		return (1);
	else
		return (0);
}

