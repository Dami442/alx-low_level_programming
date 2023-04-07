#include "main.h"
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
	int square = mid * mid;

	if (start > end)
	{
		return (-1);
	}

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
}

/**
 * _sqrt_recursion - returns the natura
 * @n: number input
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1, n));
}
