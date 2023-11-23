#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - make a copy of an array to an allocate space
 * @str: string to be used in the string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *arr;
	int i, r = 0;

	if (str == NULL)
	{
	return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
	i++;
	arr = malloc(sizeof(char) * (i + 1));
	}
	if (arr == NULL)
	{
	return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
	arr[r] = str[r];
	}
	return (arr);
}
