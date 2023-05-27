#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - prints a char from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - prints an int from var args
 * @list: va_list to print from
 * Return: void
 */
void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - prints a float from var args
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * printf_string - printfs a string from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_string(va_list list)
{
	char *string = va_arg(list, char*);

	while (string != NULL)
	{
		printf("%s", string);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - prints various types given a format string for the args
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *p;
	va_list list;
	funckey key[4] = { {printf_char, 'c'}, {printf_int, 'i'},
			   {printf_float, 'f'}, {printf_string, 's'} };
	int keyind = 0, notfirst = 0;

	p = format;
	va_start(list, format);
	while (format != NULL && *p)
	{
		if (key[keyind].spec == *p)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyind].f(list);
			p++;
			keyind = -1;
		}
		keyind++;
		p += keyind / 4;
		keyind %= 4;
	}
	printf("\n");

	va_end(list);
}
