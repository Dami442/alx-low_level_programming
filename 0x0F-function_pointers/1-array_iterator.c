#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to the first e firsts element of an int array
 * @size: size of array
 * @action: function pointer to a function
 * Return: 0 on success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL) 
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
