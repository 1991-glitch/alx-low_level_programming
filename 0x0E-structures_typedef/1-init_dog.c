#include "dog.h"

/**
 * init_dog - initializes a variable 
 * of type struct dog
 * @d: atribute pointer to struct type dog
 * @name: atribute pointer to char 
 * @age: atribute float age dog
 * @owner: atribute pointer to char owner's dog
 * Return:No
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d ->name = name;
		d ->age = age;
		d ->owner = owner;
	}
}

