#include "dog.h"
#include <stdlib.h>
/**
 * new_dog
 * @name:
 * @age:
 * @owner:
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *dt;

	dt = (dog_t *)malloc(sizeof(dog_t));
	if (dt == NULL)
	{
		return (NULL);
	}
	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	dt->name = malloc(nameLen * sizeof(dt->name));
	if (dt->name == NULL)
	{
		free(dt);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
	{
		dt->name[i] = name[i];
	}
	dt->age = age;
	dt->owner = malloc(ownerLen * sizeof(dt->owner));
	if (dt->owner == NULL)
	{
		free(dt->name);
		free(dt);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
	{
		dt->owner[i] = owner[i];
	}
	return (dt);
}
