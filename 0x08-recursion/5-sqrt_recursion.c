#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose squaroot is to be checked
 * Return: square root of n or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	int start, end, mid, sqr;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}

	start = 1;
	end = n;

	while (start <= end)
	{
		mid = (start + end) / 2;
		sqr = mid * mid;
		if (sqr == n)
		{
			return (mid);
		}
		else if (sqr < n)
		{
			start = mid + 1;
		}
		else
		{
			end =  mid - 1;
		}
	}
	return (-1);
}
