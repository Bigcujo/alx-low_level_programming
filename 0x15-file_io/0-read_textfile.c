#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program 
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return 0;
}
