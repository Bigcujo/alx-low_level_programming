#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int r;
	int f;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	f = 0;
	while (f < n && src[f] != '\0')
	{
	dest[r] = src[f];
	r++;
	f++;
	}
	dest[r] = '\0';
	return (dest);
}
