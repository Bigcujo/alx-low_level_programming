#include<stdio.h>
/**
 * main - entry point into the code
 *
 * sizeof- this operator will be used to show the size of the functions
 *
 * Return: always (0)
 */
int main(void)
{
	char t;
	int v;
	long int q;
	long long int h;
	float s;

	printf("Size of a char:%lu byte(s)\n", sizeof(t));
	printf("Size of an int:%lu byte(s)\n", sizeof(v));
	printf("Size of a long int:%lu byte(s)\n", sizeof(q));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(h));
	printf("Size of a float:%lu byte(s)\n", sizeof(s));
	return (0);
}
