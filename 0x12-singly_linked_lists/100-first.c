#include <stdio.h>

void __attribute__((constructor)) printb4Main();

/**
 * printb4main - runs before main function is executed
 */
void __attribute__((constructor)) printb4Main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

