#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural
 * @n: number input
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 0, n));
	}
}

/**
 *_sqrt_helper - checker
 * @n: number input
 *@start: lower bound of range of possible sqyare roots
 *@end: upper bound of range of possible square roots
 *Return: _sqrt_helper
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid;
	int sqr;

	if (start <= end)
	{
		mid = (start + end) / 2;
		sqr = mid * mid;
		
		if (sqr == n)
		{
			return (mid);
		}
		else if (sqr < n)
		{
			return (_sqrt_helper(n, start, mid - 1));
		}
		else
		{
			return (_sqrt_helper(n, mid + 1, end));
		}
	}
	return (-1);
}
