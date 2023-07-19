#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes
 * function given as a parameter on each element of an array.
 * @array: the array we work on
 * @size: the size of the array
 * @action:pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (size == 0 || array == NULL || action == NULL)
	return;
for (i = 0 ; i < size ; i++)
	(*action)(array[i]);
}
