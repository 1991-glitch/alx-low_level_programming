#include <stdio.h>
#include <string.h>
#include "dog.h"
#include "main.h"

/**
 *print_dog - function prints struct dog
 *
 *@d: Name of struct pointer 
 * Return: 0
 */
{
void print_dog(struct dog *d)
	
	if (d == NULL)
	{
		printf("");
	}
	if (d->name == NULL)
	{
		printf("nil");
	}
	if (d->owner == NULL)
	{
		printf("nil");
	}
	else if
	{
	printf("Name: %s \n", d->name);
	printf("Age: %d\n", d-> age);
	printf("Owner: %s\n", d-> owner);
}	
