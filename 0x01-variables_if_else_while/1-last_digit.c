#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int the_last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
the_last_digit = n % 10;
	if (the_last_digit > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, the_last_digit);
	}
	if (the_last_digit == 0)
	{
	printf("last digit of %d is %d and is 0\n", n, the_last_digit);
	}
	else if (the_last_digit < 6)
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n"
			, n, the_last_digit);
	}
	return (0);
}
