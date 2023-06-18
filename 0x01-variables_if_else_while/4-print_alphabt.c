#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
while (ch != 'q' && ch != 'e')
{
putchar(ch);
break;
}
}
putchar('\n');
return (0);
}
