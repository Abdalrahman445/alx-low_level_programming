#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
int **a;
int x;
int y;

if (width <= 0 || height <= 0)
{
return (NULL);
}
a = malloc(sizeof(int *) * height);
if (a == NULL)
{
return (NULL);
}
for (x = 0 ; x < height ; x++)
{
a[x] = malloc(sizeof(int) * width);
if (a[x] == NULL)
{
for (; x >= 0 ; x--)
{
free(a[x]);
}
free(a);
return (NULL);
}
}
for (x = 0 ; x < height ; x++)
{
for (y = 0 ; y < width ; y++)
{
a[x][y] = 0;
}
}
return (a);
}
