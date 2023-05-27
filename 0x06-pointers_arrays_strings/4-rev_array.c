#include "main.h"
/**
 * reverse_array - reverses content of an array of integers
 *@a: array parameter
 *@n: number of the elements of the array
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int *array = a;
	int start = 0;
	int end = n - 1;
	char *temp;

	while (start < end)
	{
		temp = *(array + start);
		*(array + start) = *(array + end);
		*(array + end) = temp;
		start++;
		end--;
	}
}
