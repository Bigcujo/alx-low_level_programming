#include "main.h"
/**
 * _strpbrk - this will be the entry into the code block
 * @s: takes the first charater array or string
 * @accept: the second string
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int d;
 
	while (*s)
	{
	for (d = 0; accept[d]; d++)
	{
	if (*s == accept[d])
	return (s);
	}
	s++;
	}

return ('\0');
}
