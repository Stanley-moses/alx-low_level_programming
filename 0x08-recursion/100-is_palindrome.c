#include "main.h"

/**
* _strlen_recursion - a function that prints the length of a string
* @s: An input string
* Return: Length of string
*/

int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}

/**
* pal_checker - a function that checks if s is a palindrome
* @s: string base address
* @a: left index
* @b: right index
* Return: 1 if s is palindrome, otherwise 0
*/

int pal_checker(char *s, int a, int b)
{
if (s[a] == s[b])
if (a > b / 2)
return (1);
else
return (pal_checker(s, a + 1, b - 1));
else
return (0);
}

/**
* is_palindrome - a function that checks if s is palindrome
* @s: base address for string
* Return: 1 if n is prime, otherwise 0
*/

int is_palindrome(char *s)
{
return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
