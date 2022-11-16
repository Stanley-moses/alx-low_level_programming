#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* main - a function that does hard things
* @argc: argument count
* @argv: arguments
* Return: exits 0 if normal, 98 on error, 99 on illegal
*/

int main(int argc, char *argv[])
{
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
func = get_op_func(argv[2]);
if (func == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
return (0);
}
