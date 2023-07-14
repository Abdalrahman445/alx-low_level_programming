#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: the minimum value in the array
 * @max: the maximum valude in the array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int i;
int *j;
int k;
int l;
int y;

if (min > max)
{
return (NULL);
}
i = 0;
k = min;
l = min;
y = 0;
while (k <= max)
{
i++;
k++;
}
j = malloc(i *sizeof(int));
if (j == NULL)
{
return (NULL);
}
while (l <= max)
{
j[y] = l;
y++;
l++;
}
return (j);
}
