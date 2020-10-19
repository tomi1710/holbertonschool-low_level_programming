#include "dog.h"
 /**
 *init_dog - adadsd
 *@d: asdasd
 *@name: asdad
 *@age: asda
 *@owner: adassd
 *Return: asdad
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
