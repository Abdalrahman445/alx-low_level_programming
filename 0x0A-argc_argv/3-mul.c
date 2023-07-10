#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int a;
int b;

if (argc > 3)
{
printf("Error\n");
return (1);
}
else
{
a = _atoi(argv[1]);
b = _atoi(argv[2]);
printf("%d\n", a * b);
return (0);
}
}
#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
int sign;
int i;
unsigned int res;

sign = 1;
i = 0;
res = 0;
while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
res = (res * 10) + (s[i] - '0');
i++;
}
res *= sign;
return (res);
}
