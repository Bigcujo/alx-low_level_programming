#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int d;
	long int max;
	long int i;

	d = 612852475143;

	max = -1;

	while (d % 2 == 0)
	{
	max = 2;
	d /= 2;
	}
	for (i = 3; i <= sqrt(d); i = i + 2)
	{
	while (d % i == 0)
	{
	max = i;
	d = d / i;
	}
	}
	if (d > 2)
	max = d;
	printf("%ld\n", max);
	return (0);
}
