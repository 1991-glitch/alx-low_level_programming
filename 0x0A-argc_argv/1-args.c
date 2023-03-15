#include <stdio.h>
/**
 * main function prints the number of arguments passed to it
 *
 * returns an integer
 */
int main(int argc, char* argv[])
{
	int i;

	if (argc > 0 )
	{
		printf("%d\n", argc);
	}
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
