#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: the number of the members we want to allocate
 * @size: the size of one member
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *i;
unsigned int j;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
i = malloc(nmemb * size);
if (i == NULL)
{
return (NULL);
}
for (j = 0 ; j < (nmemb * size) ; j++)
{
i[j] = 0;
}
return (i);
}
