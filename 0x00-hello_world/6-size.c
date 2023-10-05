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

	printf("Size of a char:%lu byte(s)\n", sizeof(char));
	printf("Size of an int:%lu byte(s)\n", sizeof(int));
	printf("Size of a long int:%lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(long long int));
	printf("Size of a float:%lu byte(s)\n", sizeof(float));
	return (0);
}
