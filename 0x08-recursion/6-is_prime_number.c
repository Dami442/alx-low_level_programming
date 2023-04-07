#include "main.h"
/**
 *is_prime_helper - determines if a given number n is prime or not
 * @i: current divisor to check
 * @n: integer input
 * Return: 1 if integer
 * 0 if not
 */
int is_prime_helper(int n, int i)
{

	if (n <= 1)
	{
		return (0);
	}

	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is a prime number an 0 if not
 * @n: number input
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));

}
