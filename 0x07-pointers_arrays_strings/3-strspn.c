#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s:the string we will work on
 * @accept:the length we want to count
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
