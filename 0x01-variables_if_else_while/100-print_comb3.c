#include<stdio.h>
/**
 * main - entry into the code block
 *
 * Return: always zero
 */
int main(void)
{
char r = '0';
char f = '0';
int h;
int l;

for (h = 0; h < 10; h++)
{
	for (l = h + 1; l < 10; l++)
	{
		putchar(r + h);
	       putchar(l + f);
	       putchar(',');
	       putchar(' ');
	}
}
putchar('\n');
return (0);
}
