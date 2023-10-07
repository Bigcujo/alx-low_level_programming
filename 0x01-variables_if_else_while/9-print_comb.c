#include<stdio.h>
/**
 * main - entry into the code block
 *
 * Return: always (0)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
		if (a < 9)
		putchar(',');
		putchar(' ');
	}
	return (0);
}
