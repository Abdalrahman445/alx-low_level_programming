#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings.
 * @s1: the string we want to concatenates
 * @s2: the other string we want to concatenates
 * Return:pointer should point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
int size1;
int size2;
char *a;

size1 = 0, size2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[size1] != '\0')
{
size1++;
}
while (s2[size2] != '\0')
{
size2++;
}
a = malloc((size1 + size2 + 1) * sizeof(char));
if (a == NULL)
{
return (NULL);
}
size1 = 0, size2 = 0;
while (s1[size1] != '\0')
{
a[size1] = s1[size1];
size1++;
}
while (s2[size2] != '\0')
{
a[size1] = s2[size2];
size1++, size2++;
}
a[size1] = '\0';
return (a);
}
