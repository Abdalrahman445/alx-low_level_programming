#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy -  a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: the string we want to paste the other one in
 * @src: the string we want to copy
 */
char *_strcpy(char *dest, char *src)
{
int i;
int length;

length = strlen(src);
for (i = 0 ; i < length ; i++)
{
*(dest + i) = *(src + i);
}
*(dest + length)='\0';
return (dest);
}
