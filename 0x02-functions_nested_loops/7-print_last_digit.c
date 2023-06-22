#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - a function to print the last digit
 * @n:the number that we want to know his last digit
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

if (n >= 0)
{
last_digit = n % 10;
}
else
{
n = n * -1;
last_digit = n % 10;
}
_putchar(last_digit + '0');
return (last_digit);
}
