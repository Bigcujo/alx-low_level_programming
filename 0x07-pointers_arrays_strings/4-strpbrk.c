#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: takes a string pointer
  *
  * @accept: takes a string pointer
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (a = 0; accept[a] != '\0'; a++)
	{
	if (s[i] == accept[a])
	return (s + i);
	}
	}
	return (0);
}

