#include <stdio.h>

/**
* main - a function that prints the number of arguments
* @argc: argument count
* @argv: arguments
* Return: 0
*/

int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
