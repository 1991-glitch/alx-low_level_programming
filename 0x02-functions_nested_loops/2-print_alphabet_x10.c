#include <unistd.h>
/*
 * File: 2-print_alphabet_x10.c
 * Return o always
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char letter;

	while (c++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
	}
}

