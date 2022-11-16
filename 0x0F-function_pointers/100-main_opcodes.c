#include <stdio.h>
#include <stdlib.h>

/**
* print_opcodes - a function that prints opcodes
* @a: address of main function
* @n: number of bytes
* Return: void
*/

void print_opcodes(char *a, int n)
{
int b;
for (b = 0; b < n; b++)
{
printf("%.2hhx", a[b]);
if (b < n - 1)
printf(" ");
}
printf("\n");
}

/**
* main - a function that prints opcodes
* @argc: argument count
* @argv: arrays of pointers
* Return: 0
*/

int main(int argc, char *argv)
{
int n;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, n);
return (0);
}
