#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string of chars
 * @f: function pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
