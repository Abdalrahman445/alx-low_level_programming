#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - a function that locates a substring.
 * @hatstack: the string we search in
 * @needle: the starting point in the haystack
 * Return: a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
