#include "function_pointers.h"
#include<stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add to the function
 * @f: pointer to function taken
 * Return: noting
 */
void print_name(char *name, void(*f)(char *))
{
    if (name != NULL) 
	{
	if (f != NULL) 
	{
	(*f)(name);
	} 
	else 
	{
	printf("%s\n", name);
	}
	}
	else
	{
	printf("Invalid arguments\n");
    }

}
