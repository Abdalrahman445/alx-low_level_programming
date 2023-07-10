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
int i;
int count;
int check;

check = 0;
count = 0;
for (i = 1 ; i < argc ; i++)
{
check = _check(argv[i]);
if (check)
{
printf("Error\n");
return (1);
}
else
{
count = count + _atoi(argv[i]);
}
}
printf("%d\n", count);
return (0);
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
#include "main.h"
/**
 * _check - a program to check the digit
 * Return: 0 if it is not a digit
 * @s: the string we want to check.
 */
int _check(char *s)
{
int i;
int length;

i = 0;
length = 0;
while (s[i] != '\0')
{
length++;
i++;
}
for (i = 0 ; i < length ; i++)
{
if (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0' && s[i] != '-')
{
return (1);
}
else
{
return (0);
}
}
return (0);
}

















