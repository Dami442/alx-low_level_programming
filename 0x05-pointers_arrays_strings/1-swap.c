#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 *@a: first input
 *@b: second input
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
