#include <stdio.h>
#include <stdlib.h>

/**
* main - a function that prints opcodes
* @argc: address of main function
* @argv: number of bytes
* Return: 0 on success, otherwise 1 or 2
*/

void main(int argc, char *argv[])
{
int bytes, b;
unsigned char *func_ptr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
func_ptr = (unsigned char *)main;
b = 0;
if (bytes > 0)
{
while (b < (bytes - 1))
printf("%02hhx ", func_ptr[b++]);
printf("%hhx\n", func_ptr[b]);
}
return (0);
}
