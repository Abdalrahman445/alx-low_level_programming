#include "main.h"
/**
 * print_alphabet_x10 - is a fuction to print the alphabet
 * letters in lowercase ten times
 */
void print_alphabet_x10(void)
{
int i;
int j;

for (j = 1 ; j <= 10 ; j++)
{
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
