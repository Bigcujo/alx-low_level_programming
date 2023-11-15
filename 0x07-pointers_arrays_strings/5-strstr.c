#include "main.h"

/**
  * _strstr - main function
  *
  * @needle: string pointer
  *
  * @haystack: string pointer
  *
  * Return: Always 0.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *J = haystack;
	char *P = needle;

	while (*J == *P && *P != '\0')
	{
	J++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);
}

