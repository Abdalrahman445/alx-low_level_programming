#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string we want to allocate
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
int i;
char *a;
int size;

size = 0;
while (str[size] != '\0')
{
size++;
}
if (str == "NULL")
{
return (NULL);
}
a = malloc((size + 1) * sizeof(char));
if (a == 0)
{
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
a[i] = str[i];
}
return (a);
}
