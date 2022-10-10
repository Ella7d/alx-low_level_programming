#include "dog.h"
#include <stdio.h>
/**
 * *new_dog- creates new dog
 * @name: name
 * @age:age
 * @owner: owner
 * Return: NULL on fail
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, namel, ownerl;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	for (namel = 0; name[namel]; namel++)
	;
	namel++;
	dog->name = malloc(namel * (sizeof(char)));

	if (dog->name == NULL)
	{
		free(dog);

		return (NULL);

	}

	for (i = 0; i < namel; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ownerl = 0; owner[ownerl]; ownerl++)
	;
	ownerl++;
	dog->owner = malloc(ownerl * (sizeof(char)));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerl; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
