#include<stdio.h>
#include<stdlib.h>
/**
 * create_array-this function will create an array of charaters
 * @size:this will take the size of the preffered array
 * @c:this will take the charater value we want in the array
 * Return: this will return a charater.
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int count = 0;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
	{
		return (NULL);
	}
	while (count < size)
	{
		string[count] = c;
		string++;
	}
	return (string);
}



