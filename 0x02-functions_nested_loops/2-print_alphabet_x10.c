#include "main.h"

/**
* print_alphabet_x10 - Prints 10x the alphabets in lowercase,
* followed by a newline
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
char i;
int j;

for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
}
}
