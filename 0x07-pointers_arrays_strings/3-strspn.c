#include "main.h"

/**
  * _strspn - main function
  *
  * @s: char string
  *
  * @accept: char string
  *
  * Return: Always 0.
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int g = 0;
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	{
	g++;
	break;
	}
	else if (accept[i + 1] == '\0')
	return (g);
	}
	s++;
	}
	return (g);
}

