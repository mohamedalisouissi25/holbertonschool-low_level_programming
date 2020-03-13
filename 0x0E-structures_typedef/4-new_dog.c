#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *new_dog - creates a new dog
  *@name: input
  *@owner: input
  *@age: input
  *Return: output
  */
dog_t *new_dog(char *name, float age, char *owner)

{

dog_t *p;
int i = 0, j = 0, x, y;

	if (name == NULL || owner == NULL)
	return (NULL);
	p = malloc(sizeof(dog_t));

	if (p ==  NULL)
	return (NULL);

while (name[i++])

	p->name = malloc(i);
	if (p->name == NULL)
	{
	free(p);
	return (NULL);
	}

for (x = 0; x < i; x++)
	p->name[x] = name[x];

while (owner[j++])
	p->owner = malloc(j);
	if (p->owner == NULL)
	{
	free(p->name);
	free(p);
	return (NULL);
	}

for (y = 0; y < j; y++)
	p->owner[y] = owner[y];
	p->age = age;
	return (p);
}
