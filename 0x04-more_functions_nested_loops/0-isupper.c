#include "main.h"
/**
 *_isupper - checks for uppercase letters
 *@c: letter to be used
 * Return: 1 if it is uppercase
 * and 0 is otherwise
 *
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
