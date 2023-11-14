#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: Source array
  *
  * @dest: Destination array
  *
  * @n: unsigned int varable
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}

