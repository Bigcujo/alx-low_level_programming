#include "main.h"
/**
 * _strlen - returns the length of a string
 * @string:string passed
 * Return: length
 */
int _strlen(char *string)
{
	int longi = 0;

	while (*string != '\0')
	{
		longi++;
		string++;
	}

	return (longi);
}

