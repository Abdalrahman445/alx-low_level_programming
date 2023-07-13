#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @c: the char we want to make an array of
 * @size: the size of the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
int i;
char *a;
int length;

length = size;
a = malloc(size * sizeof(char));
if (a == 0)
{
return (NULL);
}
for (i = 0 ; i < length ; i++)
{
a[i] = c;
}
return (a);
}
