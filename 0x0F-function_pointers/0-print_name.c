#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string of chars
 * @f: pointer to function
 * Return: 0 on success
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
