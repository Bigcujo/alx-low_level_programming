#include "main.h"
/**
 * rev_string - Reverses a string
 * @string: Input string
 * Return: void
 */
void rev_string(char *string)
{
	char rev = string[0];
	int counter = 0;
	int i;

	while (string[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = string[i];
		string[i] = string[counter];
		string[counter] = rev;
	}
}

