#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 *struct dog - adads
 *@name: asdasd
 *@age: asdads
 *@owner: asdad
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
