#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - a function that
 * Return: 1 if a string is a palindrome and 0 if not.
 * @s: the string we want to identify.
 */
int is_palindrome(char *s)
{
int length;
int i;

i = 0;
length = _strlen_recursion(s);
return (_actual_palindrome(s, length, i));
}
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string we want to know its length
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
int j;

j = 0;
if (*s)
{
j++;
j = j + _strlen_recursion(s + 1);
}
return (j);
}
/**
 * _actual_palindrome - a function that
 * Return: 1 if a string is a palindrome and 0 if not.
 * @s: the string we want to identify.
 * @length: the length of the array.
 * @i: the test number.
 */
int _actual_palindrome(char *s, int length, int i)
{
if (*(s + i) != *(s + length - 1))
{
return (0);
}
else if (i >= length)
{
return (1);
}
return (_actual_palindrome(s, length - 1, i + 1));
}
