#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the size of the second string
 * Return: pointer shall point to a newly allocated space in memory,
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int j;
unsigned int k;
char *c;

i = 0, j = 0;
while (s1 && s1[i] != '\0')
{
i++;
}
while (s2 && s2[j] != '\0')
{
j++;
}
if (n >= j)
{
c = malloc(sizeof(char) * (j + i + 1));
}
else
{
c = malloc(sizeof(char) * (n + i + 1));
}
if (c == NULL)
{
return (NULL);
}
k = 0, j = 0;
while (s1[k] != '\0')
{
c[k] = s1[k], k++;
}
while (k < (n + i) &&s2[j] != '\0')
{
c[k] = s2[j], k++, j++;
}
c[k] = '\0';
return (c);
}
