#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Check if character is lowercase
* @c: An input character
* Description: function uses _putchar function to print
* alphabet in lowercase 10 times
* Return: 1 if is lowercase or 0 if is uppercase
*/

int main(int c)
{
char i;
int lower = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}

return (lower);
}
