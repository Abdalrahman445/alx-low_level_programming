#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: the array that we will search on
 * @size: the size of the array
 * @cmp: pointer to fuction
 * Return: the index of the first element for
 * which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int j;

if (size <= 0 || array == NULL || cmp == NULL)
	return (-1);
for (i = 0 ; i < size ; i++)
{
j = (*cmp)(array[i]);
if (j != 0)
{
return(i);
}
}
return (-1);
}
