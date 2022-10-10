#include "dog.h"
/**
 * init_dog - initializes dog
 * @d: dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @Return: nothing
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
#endif
