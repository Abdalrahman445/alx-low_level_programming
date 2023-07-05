#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string we want to know its length
 */
int _strlen_recursion(char *s)
{
int i;

i = 0;
if (*s)
{
i++;
i = i + _strlen_recursion(s + 1);
}
return (i);
}
