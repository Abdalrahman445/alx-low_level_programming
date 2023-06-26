#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: the string we want to print it in reverse
 */
void print_rev(char *s)
{
int i;
int j;

i = strlen(s);
for (j = i - 1 ; j >= 0 ; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
