#include "dog.h"
/**
 * dog - struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
/**
 * init_dog - initializes dog 
 * @d: dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
#endif
	
