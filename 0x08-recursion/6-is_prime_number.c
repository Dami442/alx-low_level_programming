#include "main.h"
/**
 *is_prime_number - returns 1 if input integer is a prime number
 * otherwise, 0
 * @n: integer input
 * Return: 1 if integer
 * 0 if not
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
