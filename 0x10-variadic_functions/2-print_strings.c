#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - prints string, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: nil if one of strings is NULL, otherwise
 * return string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char  *string;

	va_start(arg, n);
	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);
		if (string == NULL)
		{
			printf("(nil");
		}
		else
		{
			printf("%s", string);

		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(arg);
	printf("\n");
}


