#include "main.h"

/**
* _strlen_recursion - a function that prints the length of a string
* @s: An input string
* Return: int
*/

int _strlen_recursion(char *s)
{
int j = 0;
if (*s)
{
j++;
j += _strlen_recursion(s + 1);
}
return (j);
}
