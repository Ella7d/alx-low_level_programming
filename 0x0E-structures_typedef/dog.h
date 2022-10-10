#ifndef DOG_H
#define DOG_H
/**
 * struct dog- creates dog struct
 * @name: name 
 * @age: age
 * @owner: owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
/**
 * dog_i - typedefdog
 *
 */
typedef struct dog dog_i;
	{
		dog_i.name = &name;
		dog_i.age = age;
		dog_i.owner = &owner;
	}
#endif
