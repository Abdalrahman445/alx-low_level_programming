#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string we work on
 */
void puts2(char *str)
{
int i;
int length;

length = strlen(str);
for (i = 0 ; i < length ; i++)
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
}
_putchar('\n');
}
