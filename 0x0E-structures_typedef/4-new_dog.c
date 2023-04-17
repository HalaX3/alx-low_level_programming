#include <stdlib.h>
#include "dog.h"

/**
 * str_len - finds the length of a string
 * @s: string to evaluated
 * Return: length of string
 */

int str_len(char *str)
{
	int itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		itr++;
	}

	return (i);
}

/**
 * *str_copy - copies the string pointedbincluding the terminating
 * null byte (\0) to the buffer pointed to by destination
 * @d: pointer to the buffer
 * @s: string to be copied
 *
 * Return: the pointer to dest
 */

char *str_cpy(char *d, char *s)
{
	int length, itr;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (itr = 0; itr < length; itr++)
	{
		d[itr] = s[itr];
	}
	d[itr] = '\0';

	return (d);
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
	dog_t *dogptr;
	int length1, length2;

	length1 = str_len(name);
	length2 = str_len(owner);

	dogptr = malloc(sizeof(dog_t));
	if (dogptr == NULL)
		return (NULL);

	dogptr->name = malloc(sizeof(char) * (length1 + 1));
	if (dogptr->name == NULL)
	{
		free(dogptr);
		return (NULL);
	}
	dogptr->owner = malloc(sizeof(char) * (length2 + 1));
	if (dogptr->owner == NULL)
	{
		free(dogptr);
		free(dogptr->name);
		return (NULL);
	}
	str_cpy(dogptr->name, name);
	strcpy(dogptr->owner, owner);
	dogptr->age = age;

	return (dogptr);
}
