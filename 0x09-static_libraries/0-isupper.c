#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isupper -  a function that checks for uppercase character.
 * @c: the letter that we want to check
 * Return:Returns 1 if c is uppercase
 *  Returns 0 otherwise
 */
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
