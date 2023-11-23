#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - string there are digit in the program
* @str: array str
*
* Return: Always 0 (Success)
*/
	int check_num(char *str)
	{
/*Declaring variables*/
	unsigned int count;

	count1 = 0;
	while (count1 < strlen(str)) /*count string*/
	{
	if (!isdigit(str[count1])) /*check if str there are digit*/
	{
	return (0);
	}
	count1++;
	}
	return (1);
	}
/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
	{
	/*Declaring variables in the function*/
	int count1;
	int str_to_int;
	int total = 0;

	count1 = 1;
	while (count1 < argc) /*Goes through the whole array*/
	{
	if (check_num(argv[count1]))
	{
	str_to_int = atoi(argv[count1]); /*ATOI --> convert string to int*/
	total += str_to_int;
	}
/*Condition if one of the number contains symbols that are not digits*/
	else
	{
	printf("Error\n");
	return (1);
	}
	count1++;
}
	printf("%d\n", total); /*print sum*/
	return (0);
}
