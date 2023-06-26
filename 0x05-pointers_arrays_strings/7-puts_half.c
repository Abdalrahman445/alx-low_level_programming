#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: the string we work on
 */
void puts_half(char *str)
{
long i;
long length;
long n;

length = strlen(str);
if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length + 1) / 2;
}
for (i = n ; i < length ; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
