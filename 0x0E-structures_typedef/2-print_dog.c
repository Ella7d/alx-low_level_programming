#include "dog.h"
/**
 * print_dog - prints dog info
 * @d: dog info
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (0);
	}
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil\n)");
		
	printf("Age: %.6f\n", d->age);
	
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nill)\n");
}

