#include<stdio.h>
/**
 * main - entry into the code block
 *
 * Return: always (0)
 */
int main(void)
{
	char a;

	for (a = 0; a < 16; a++)
	{
		if (a < 10)
		{
		putchar('0' + a);
		}
	else
	{
		putchar('a' + (a - 10));
	}
	}
	putchar('\n');
	return (0);
}
