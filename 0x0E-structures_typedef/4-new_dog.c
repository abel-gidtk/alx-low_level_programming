#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

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
	int i = 0, j = 0, k;
	dog_t *pdog = malloc(sizeof(dog_t));

	if (pdog == NULL)
		return (NULL);

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	pdog->name = malloc(i * sizeof(pdog->name));
	if (pdog->name == NULL)
	{
		free(pdog->name);
		free(pdog);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		pdog->name[k] = name[k];

	pdog->owner = malloc(j * sizeof(pdog->owner));
	if (pdog->owner == NULL)
	{
		free(pdog->name);
		free(pdog->owner);
		free(pdog);
		return (NULL);
	}

	for (k = 0; k < j; k++)
		pdog->owner[k] = owner[k];

	pdog->age = age;
	return (pdog);
}
