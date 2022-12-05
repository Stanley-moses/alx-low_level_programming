#include <stdio.h>

/**
* main - a function that gets header of ELF file
* @argc: number of arguments
* @argv: pointer to array of arguments
* Return: 1 on success, otherwise error
*/

int main(int argc, char *argv[])
{
printf("argc:%d, argv:%p\n", argc, (void *)*argv);
return (1);
}
