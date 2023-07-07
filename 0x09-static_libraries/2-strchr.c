#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s:the string we want to search on
 * @c:the char we search for
 * Return:a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
return (strchr(s, c));
}
