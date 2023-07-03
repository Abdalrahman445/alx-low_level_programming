#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - a function that prints the
 * sum of the two diagonals of a square matrix of integers.
 * @a: the matrix we work on
 * @size: the size of the matrix a
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1;
int sum2;

sum1 = 0;
sum2 = 0;
for (i = 0 ; i < size ; i++)
{
sum1 = sum1 + a[i * size + i];
}
printf("%d, ", sum1);
for (i = 0 ; i < size ; i++)
{
sum2 = sum2 + a[i * size + (size - i - 1)];
}
printf("%d\n", sum2);
}
