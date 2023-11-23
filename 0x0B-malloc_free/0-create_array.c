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
	char *str;
	unsigned int i;
	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	str[i] = c;
	return (str);
}
