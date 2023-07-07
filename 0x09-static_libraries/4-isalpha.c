#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Returns non-zero if the given character
 * is an alphabetic character.
 * Otherwise, returns zero.
 * @c : the character to test
 * Return: 1 if it is alphabet and 0 if it is not
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
