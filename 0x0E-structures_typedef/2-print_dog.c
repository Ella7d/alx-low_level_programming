#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints dog info
 * @d: dog info
 * Return: Nothing
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil\n)");

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", d->age);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nill)\n");
}
