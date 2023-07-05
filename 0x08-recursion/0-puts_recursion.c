#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion -  a function that prints a string,
 * followed by a new line.
 * @s: the string we want to print
 */
void _puts_recursion(char *s)
{
int i;
int length;

length = strlen(s);
for (i = 0 ; i < length ; i++)
{
_putchar(*(s + i));
}
_putchar('\n');
}
