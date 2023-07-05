#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: the number we want to get its factorial
 * Return: the factorial of a given number.
 */
int factorial(int n)
{
int i;

i = n;
if (n > 0)
{	
i = i * factorial(n - 1);
return (i);
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
