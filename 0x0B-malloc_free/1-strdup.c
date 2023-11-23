#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - make a copy of an array to an allocate space
 * @str: string to be used in the string
 * Return: 0
 */
#include <stdlib.h>

char *_strdup(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}

	int length = 0;

	while (str[length] != '\0')
	{
	length++;
	}

	char *arr = malloc(sizeof(char) * (length + 1));

	if (arr == NULL)
	{
	return (NULL);
	}

	for (int i = 0; i <= length; i++)
	{
	arr[i] = str[i];
	}

	return (arr);
}

