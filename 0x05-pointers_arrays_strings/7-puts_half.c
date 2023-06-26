#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: the string we work on
 */
void puts_half(char *str)
{
int i;
long length;

length = strlen(str);
if (length % 2 == 0)
{
for (i = (length / 2) ; i < length ; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
else
{
for (i = (length - 1 / 2) ; i < length ; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
}
