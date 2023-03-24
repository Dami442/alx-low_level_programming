#include "main.h"
/**
 *_isdigit - checks for digit
 *@c: parameter to be used
 *Return: 1 if parameter is a digit
 *and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
	
