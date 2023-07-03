#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - a function that searches a
 * string for any of a set of bytes.
 * @s: the string we will work on
 * @accept: the matching string
 * Return: a pointer to the byte in s that
 * matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
