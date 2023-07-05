#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _pow_recursion - a function that returns the value of x raised to the power of y.
 * @x: the value of the number we want to add a power to it
 * @y: the value of the power we want to add
 * Return: the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
int i;

i = x;
if (y > 0)
{
i = i *_pow_recursion(x, y - 1);
return (i);
}
else if (y == 0)
{
return(1);
}
else
{
return (-1);
}
}
