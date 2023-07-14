#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * n: the size of the second string
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int j;
char *c;

i = 0 , j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
if (n >= j)
{
c = malloc(sizeof(char) * (j + i + 1));
i = 0 , j = 0;
if (c == NULL)
{
return (NULL);
}
while (s1[i] != '\0')
{
c[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
c[i] = s2[j];
i++, j++;
}
c[i] = '\0';
}
else
{
c = malloc(sizeof(char) * (i + n + 1));
if (c == NULL)
{
return (NULL);
}
i = 0 , j = 0;
while (s1[i] != '\0')
{       
c[i] = s1[i];
i++;
}
while (j < n)
{
c[i] = s2[j];
i++, j++;
}
c[i] = '\0';
}
return (c);
}
