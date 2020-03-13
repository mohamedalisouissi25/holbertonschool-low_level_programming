#ifndef DOG_H
#define DOG_H
/**
*struct dog - makes a structure
*@name: input
*@owner: input
*@age: input
**/
struct dog
{
char *name;
char *owner;
float age;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
#endif
