#include<stdio.h>
/**
 * main - entry into the code block
 *
 * Return: always (0)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char number = '0' + a;

		putchar(number);
	}
	putchar('\n');
	return (0);
}
