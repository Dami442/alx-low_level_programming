#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog memory
 * @d: pointer to dog contents
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
