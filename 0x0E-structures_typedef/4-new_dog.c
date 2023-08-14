#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog = malloc(sizeof(dog_t));

	if (pdog == NULL)
		return (NULL);

	if (name == NULL || owner == NULL)
		return (NULL);

	pdog->name = strdup(name);
	if (pdog->name == NULL)
	{
		free(pdog);
		return (NULL);
	}

	pdog->age = age;

	pdog->owner = strdup(owner);
	if (pdog->owner == NULL)
	{
		free(pdog->name);
		free(pdog);
		return (NULL);
	}

	return (pdog);
}
