#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints out valif statement
 *
 * Return: 0 on success
 */
int main(void)
{
	int n = 0;
	int last_digit;

	last_digit = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last_digit > 5)
{	printf("Last digit of %d is greater than 5\n", n);
}
	else if (last_digit == 0)
{	printf("Last digit of %d is 0\n", n);
}
	else if (last_digit < 6 && !0)
{	printf("Last digit of %d is less than 6 and not 0\n", n);
}
	else
{	printf("Programme not designed yet for this condition\n");
}
	return (0);
}
