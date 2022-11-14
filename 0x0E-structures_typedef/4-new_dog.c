#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_doggy;
	int i, lname, lowner;

	p_doggy = malloc(sizeof(*p_doggy));
	if (p_doggy == NULL || !(name) || !(owner))
	{
		free(p_doggy);
		return (NULL);
	}
	for (lname = 0; name[lname]; lname++)
		;
	for (lowner = 0; owner[lowner]; lowner++)
		;
	p_doggy->name = malloc(lname + 1);
	p_doggy->owner = malloc(lowner + 1);
	if (!(p_doggy->name) || !(p_doggy->owner))
	{
		free(p_doggy->owner);
		free(p_doggy->name);
		free(p_doggy);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
		p_doggy->name[i] = name[i];
	p_doggy->name[i] = '\0';
	p_doggy->age = age;
	for (i = 0; i < lowner; i++)
		p_doggy->owner[i] = owner[i];
	p_doggy->owner[i] = '\0';
	return (p_doggy);
}
