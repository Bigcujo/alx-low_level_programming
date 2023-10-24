#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input the value of the first string
 * @s2: input the value of the first string
 *
 * Return: s1[g] - s2[g]
 */
int _strcmp(char *s1, char *s2)
{
	int g;

	g = 0;
	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
		{
			return (s1[g] - s2[g]);
		}
		g++;
	}
	return (0);
}

