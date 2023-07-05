#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_prime_number - a function that
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 * @n: the number we want to idetify it.
 */
int is_prime_number(int n)
{
int i;

i = 2;
if (n <= 1)
{
return (0);
}
return (_actual_prime_number(n, i));
}
/**
 * _actual_prime_number - a function that
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 * @n: the number we want to idetify it.
 * @i: the test number.
 */
int _actual_prime_number(int n, int i)
{
int j;

j = n / i;
if (j *i < n)
{
_actual_prime_number(n, i + 1);
return (1);
}
else
{
return (0);
}
}
