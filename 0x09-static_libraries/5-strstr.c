#include "main.h"
/**
 * _strstr - Entry point into the code block
 * @haystack: takes the first string 
 * @needle: takes th second string
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *a = haystack;
	char *s = needle;

	while (*a == *s && *s != '\0')
	{
	a++;
	s++;
	}

	if (*s == '\0')
	{
	return (haystack);
	}
	}

	return (0);
}

