#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - check the code
 * Return: Always 0.
 */

int main(argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2= atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (*op == '/' && num2 == 0 || *op == '%' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_fun(op)(num1, num2));
	return (0);
}	


