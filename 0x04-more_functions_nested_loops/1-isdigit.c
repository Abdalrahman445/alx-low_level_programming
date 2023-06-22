#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: the digit that we want to check
 * Return: Returns 1 if c is a digit
 *  Returns 0 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
