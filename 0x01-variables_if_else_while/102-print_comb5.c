#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
int l;

for (i = '0' ; i <= '9' ; i++)
{
for (j = '0' ; j < '9' ; j++)
{
for (k = i ; k <= '9' ; k++)
{
for (l = j + 1 ; l <= '9' ; l++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i != '9' || j != '8' || k != '9' || l != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
