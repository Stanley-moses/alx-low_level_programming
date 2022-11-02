#include "main.h"

/**
* check - a function that checks if a number is prime
* @x: An integer input
* @y: An integer input
* Return: int
*/

int check(int x, int y)
{
if (y < 2 || y % x == 0)
return (0);
else if (x > y / 2)
return (1);
else
return (check(x + 1, y));
}

/**
* is_prime_number - a function that tells if a number is prime
* @n: An input integer
* Return: int
*/

int is_prime_number(int n)
{
if (n == 2)
return (1);
return (check(2, n));
}
