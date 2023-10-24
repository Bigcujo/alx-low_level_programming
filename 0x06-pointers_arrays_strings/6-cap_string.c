#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index_num = 0;

	while (str[index_num])
	{
		while (!(str[index_num] >= 'a' && str[index_num] <= 'z'))
			index++;

		if (str[index_num - 1] == ' ' ||
		    str[index_num - 1] == '\t' ||
		    str[index_num - 1] == '\n' ||
		    str[index_num - 1] == ',' ||
		    str[index_num - 1] == ';' ||
		    str[index_num - 1] == '.' ||
		    str[index_num - 1] == '!' ||
		    str[index_num - 1] == '?' ||
		    str[index_num - 1] == '"' ||
		    str[index_num - 1] == '(' ||
		    str[index_num - 1] == ')' ||
		    str[index_num - 1] == '{' ||
		    str[index_num - 1] == '}' ||
		    index_num == 0)
			str[index_num] -= 32;

		index_num++;
	}

	return (str);
}

