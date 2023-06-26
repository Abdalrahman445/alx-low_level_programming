#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: the string we want to reverse it
 */
void rev_string(char *s)
{
int i;
char *start;
char *end;
char temp;
int length;

start = s;
length = strlen(s);
end = s + length;
for (i = 0; i < length / 2; i++)
{
temp = *(start + i);
*(start + i) = *(end - i - 1);
*(end - i - 1) = temp;
}
}
