#include "main.h"
/**
 *is_prime_number - returns 1 if input integer is a prime number
 * otherwise, 0
 * is_prime_helper - 
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

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
	
}
