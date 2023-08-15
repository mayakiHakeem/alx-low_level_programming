#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *src, char *dest);
int _strlen(const char *src);

/**
 * new_dog - creates a new dog
 * @name: param for name of dog
 * @age: param for dog age
 * @owner: param for dog's owner
 *
 * Return: new_dog (success)
 * NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size1, size2;
	dog_t *dog1;

	/*allocate memory for the struct element*/
	dog1 = malloc(sizeof(dog_t));
	/**check if allocation fail*/
	if (dog1 == NULL)
		return (NULL);

	/*get size of memory and allocate*/
	size1 = _strlen(name) + 1;
	size2 = _strlen(owner) + 1;
	dog1->name = malloc(sizeof(char) * size1);

	/**check if allocation fail*/
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}

	/*copy name to allocated memory of name element*/
	_strcpy(name, dog1->name);

	/*copy age to allocated memory of age element*/
	dog1->age = age;

	/*allocate memory for owner element*/
	dog1->owner = malloc(sizeof(char) * size2);

	/*check if allocated memory fail*/
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
/*copy owner param to allocated memory of owner element*/
	_strcpy(owner, dog1->owner);
	return (dog1);
}

/**
 * _strcpy - duplicate string
 * @src: str to copy
 * @dest: destination to copy to
 *
 * Return: ptr to dest
 */
char *_strcpy(char *src, char *dest)
{
	int i;

	/*manage empty string*/
	if (src == NULL)
		return ("");

	/*copy src to dest*/
	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	/*Add null-byte*/
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - get length of str
 * @str: str to get length
 *
 * Return: length
 */
int _strlen(const char *str)
{
	int i, len = 0;

	/*loop the string to count*/
	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}
