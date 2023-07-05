#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _sqrt_recursion - a function that
 * Return: the natural square root of a number.
 * @n: the number we want to find its square root
 */
int _sqrt_recursion(int n)
{
int i;

i = 0;
if (n < 0)
{
return (-1);
}
return (_actual_sqrt_recursion(n, i));
}
/**
 * _actual_sqrt_recursion - a function that
 * Return: the natural square root of a number.
 * @i:the number we want to return.
 * @n: the number we want to find it square root
 */
int _actual_sqrt_recursion(int n, int i)
{
if (n >= i)
{
if (i *i == n)
{
return (i);
}
else
{
return (_actual_sqrt_recursion(n, i + 1));
}
}
else
{
return (-1);
}
}
