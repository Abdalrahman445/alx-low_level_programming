#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minutes of the day
*/
void jack_bauer(void)
{
int i;
int j;
int k;
int l;

for (i = '0' ; i <= '2' ; i++)
{
for (j = '0' ; j <= '9' ; j++)
{
if (i == '2' && j == '4')
{
break;
}
for (k = '0' ; k <= '5' ; k++)
{
for (l = '0' ; l <= '9' ; l++)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(l);
_putchar('\n');
}
}
}
}
}