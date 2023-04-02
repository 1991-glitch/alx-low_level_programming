#include <stdio.h>

void __attribute__((constructor)) printb4Main();

/**
 * printb4main - function prints a string before main is executed
 *
 * Return: A string
 */
void printb4main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

