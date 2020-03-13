#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free mem
 * @d: input
 * Return: output
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
