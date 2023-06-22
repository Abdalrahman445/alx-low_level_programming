#include "main.h"
#include <stdio.h>
/**
 * times_table -  prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i;
int j;

for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
printf("%d", i * j);
if (j == 9)
{
break;
}
if (i * j >= 10)
{
printf(", ");
}
else
{
printf(",  ");
}
}
_putchar('\n');
}
}
