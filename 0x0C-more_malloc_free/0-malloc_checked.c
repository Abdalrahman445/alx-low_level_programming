#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * Return: a pointer to the allocated memory
 * @b: the size of memory we want to allocate.
 */
void *malloc_checked(unsigned int b)
{
void *i;

i = malloc(b);
if (i == NULL)
{
exit(98);
}
return (i);
}
