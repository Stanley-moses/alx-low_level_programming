#include "main.h"

/**
* check - a function that checks for square root
* @x: int
* @y: int
* Return: int
*/

int check(int x, int y)
{
if (x * x == y)
return (x);
if (x * x > y)
return (-1);
return (check(x + 1, y));
}

/**
* _sqrt_recursion - a function that prints natural square root
* @n: An input integer
* Return: Natural square root or -1
*/

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (check(1, n));
}
