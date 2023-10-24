#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int e, a;

	char data_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (e = 0; s[e] != '\0'; e++)
	{
		for (a = 0; a < 52; a++)
		{
			if (s[e] == data_1[a])
			{
				s[e] = data_rot[a];
				break;
			}
		}
	}
	return (s);
}

