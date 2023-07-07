#include "main.h"
/**
 * _memcpy -  a function that copies memory area.
 * @n:the number of bytes we want to copy
 * @src:the source we want to copy from
 * @dest:the memory we want to paste in
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
