#include<stdio.h>
/**
 * main - entry into the code block
 *
 * Return: always zero
 */
int main(void)
{
int h;
int l;

for (h = 0; h < 10; h++)
{
	for (l = h + 1; l < 10; l++)
	{
		putchar('0' + h);
	       putchar('0' + l);
	       putchar(',');
	       putchar(' ');
	}
}
putchar('\n');
return (0);
}
