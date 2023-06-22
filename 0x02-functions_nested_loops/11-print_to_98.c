#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 -  a function that prints all natural numbers from n to 98
 * followed by a new line
 * @n: the value that we want to print from
 */
void print_to_98(int n)
{
int temp;
int i;

if (n > 98)
{
for (; n >= 100 ; n--)
{
_putchar((n / 100) + '0');
temp = n / 10;
_putchar((temp % 10) + '0');
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
}
for (; n > 98 ; n--)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
if (n < 98)
{
for (; n <= -10 ; n++)
{
i = abs(n);
_putchar('-');
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(',');
_putchar(' ');
}
for (; n < 0 ; n++)
{
i = abs(n);
_putchar('-');
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
for (; n < 10 ; n++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
for (; n < 98 ; n++)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}

	
