#include <stdio.h>
/**
 *main - checks  whether an infinite loop is incoming it avoided
 *
 *@ \o/ means a  happy face when loop is avoided
 *
 * Return: 0 when loop is avoided
 */
int main(void)
{
int i;

printf("Infinite loop incoming :(\n");
i = 0;

/**
 * while (i < 10)
 *{
 *putchar(i);
 *}
 */
printf("Infinite loop avoided! \\o/\n");
return (0);
}
