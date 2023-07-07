#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @n: the number of bytes we want to change
 * @b: the value we want to assign
 * @s: the memory area we work on
 * Return: the memory set we want
 */
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
