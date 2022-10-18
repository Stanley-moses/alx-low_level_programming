#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - check the code.
*
* Return: Always 0.
*/

int main(void)
{
char i;
char j;

for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
}

return (0);
}
