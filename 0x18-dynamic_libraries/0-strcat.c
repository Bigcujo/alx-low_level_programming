#include "main.h"
/**
 * _strcat - this function will append the srs to dest
 * @dest : this will be the destination string
 * @src : this will be the source string
 * Return: @dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int t, f;

	t = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	f = 0;
	while (src[f] != '\0')
	{
		dest[t] = src[f];
		t++;
		f++;
	}
	dest[t] = '\0';
	return (dest);
}
