#include "main.h"
#include <stdio.h>
/**
 * print_sign - is a function to chech the sign of a number
 * @n : the number which we want to check
 * Return: 1 and prints + if n is greater than zero and
 * 0 and prints 0 if n is zero and
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
}
else if (n == 0)
{
return (0);
}
else if (n < 0)
{
return (-1);
}
return (0);
}
