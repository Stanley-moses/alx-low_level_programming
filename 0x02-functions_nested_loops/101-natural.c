#include <stdio.h>
#include <stdlib.h>

/**
* main - Printing natural numbers
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 5) == 0 || (i % 3) == 0)
sum += 1;
}
printf("%d\n", sum);

return (0);
}
