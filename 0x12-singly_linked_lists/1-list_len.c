#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: ptr to list_t head
 *
 * Return: number of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

