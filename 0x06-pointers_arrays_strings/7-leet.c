#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int f, e;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (f = 0; n[f] != '\0'; f++)
	{
		for (e = 0; e <= 9; e++)
		{
			if (n[f] == s1[e])
			{
				n[f] = s2[e];
			}
		}
	}
	return (n);
}

