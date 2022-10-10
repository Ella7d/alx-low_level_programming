#include "dog.h"
/**
 * print_dog - prints dog info
 * @d: dog info
 * Return: NULL if fail
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return (0);
	{
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil\n)");
		
	printf("Age: %.6f\n", d->age);
	
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nill)\n");
	}
}


