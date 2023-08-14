#include "dog.h"
#include <stddef.h>

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
	dog_t dog;
	dog_t *pdog;

	pdog = &dog;

	if (!pdog || name == NULL || owner == NULL)
		return (NULL);
	pdog->name = name;
	pdog->age = age;
	pdog->owner = owner;

	return (pdog);
}
