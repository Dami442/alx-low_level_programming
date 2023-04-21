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
	char *sepr, *p;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sepr = "";
	else
		sepr = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(list, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", sepr, p);
	}
	printf("\n");
	va_end(list);
}
