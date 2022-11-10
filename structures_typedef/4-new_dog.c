/*
 * Auth: Jhonier Santana
 */
#include "dog.h"
/**
 * new_dog - name to the pointer to the new dog
 * @name:dog name
 * @age:dog age
 * @owner:dog owner
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namel, ownerl, n, o;
	dog_t *newdog;

	namel = strlen(name);
	ownerl = strlen(owner);

		newdog = malloc(sizeof(dog_t));

		if (newdog == NULL)
			return (NULL);

		newdog->name = malloc(namel + 1);

		if (name == NULL)
			{
			free(newdog->name);
			free(newdog);
			return (NULL);
			}

		for (n = 0; n < namel + 1; n++)
			newdog->name[n] = name[n];

		newdog->owner = malloc(ownerl + 1);

		if (owner == NULL)
			{
			free(newdog->owner);
			free(newdog->name);
			free(newdog);
			return (NULL);
			}

		for (o = 0; o < ownerl + 1; o++)
			newdog->owner[o] = owner[o];

	return (newdog);
}
