#include "main.h"
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
	return (_sqrt_helper(n, 0, n));
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
	int mid  = (start + end) / 2;

	if (start > end)
	{
		return (-1);
	}

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
}

