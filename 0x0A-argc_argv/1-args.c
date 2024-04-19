#include <stdio.h>
#include "main.h"
/**
 * main - this will print the number of arg in the program
 * @argc: number of arguments to be collected
 * @argv: array of arguments in the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
