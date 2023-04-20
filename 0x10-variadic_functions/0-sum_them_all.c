#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments the function takes
 * Return: n if n is equal to 0, or sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned  int);
	}
	va_end(arg);

	return (sum);
}
