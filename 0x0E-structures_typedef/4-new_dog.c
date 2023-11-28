#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - this will always returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
	int _strlen(char *s)
	{
		int x;


		x = 0;


		while (s[x] != '\0')
		{
			x++;
		}


		return (x);
	}


/**
 * *_strcpy -this will copy the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
	char *_strcpy(char *dest, char *src)
	{
		int len, s;


		len = 0;


		while (src[len] != '\0')
		{
			len++;
		}


		for (s = 0; s < len; s++)
		{
			dest[s] = src[s];
		}
		dest[s] = '\0';


		return (dest);
	}


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
	dog_t *new_dog(char *name, float age, char *owner)
	{
		dog_t *dog;
		int lens1, lens2;


		lens1 = _strlen(name);
		lens2 = _strlen(owner);


		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);


		dog->name = malloc(sizeof(char) * (lens1 + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * (lens2 + 1));
		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}
		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;


		return (dog);
	}

