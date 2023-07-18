#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;

int len1;
int len2;

len1 = 0;
len2 = 0;
while (name[len1] != '\0')
	len1++;
while (owner[len2] != '\0')
	len2++;
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
	return (NULL);
my_dog->name = malloc(sizeof(char) * (len1 + 1));
if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}
my_dog->owner = malloc(sizeof(char) * (len2 + 1));
if (my_dog->owner == NULL)
{
free(my_dog);
free(my_dog->name);
return (NULL);
}
_strcpy(my_dog->name, name);
_strcpy(my_dog->owner, owner);
my_dog->age = age;
return (my_dog);
}
/**
 * _strcpy - a function to copy strings
 * @dest:the location we want to paste in
 * @src: the string we want to copy
 * Return: a pointer of dest.
 */
char *_strcpy(char *dest, char *src)
{
int len;
int i;

len = 0;
while (src[len] != '\0')
	len++;
for (i = 0 ; i < len ; i++)
	dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
