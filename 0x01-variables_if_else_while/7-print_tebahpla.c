#include<stdio.h>
/**
 * main - entry into the code block
 *
 * Return: always (0)
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}

