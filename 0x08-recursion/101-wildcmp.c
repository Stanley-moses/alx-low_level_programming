#include "main.h"

/**
* str_checker - a function that checks if two strings are identical
* @s1: An input base address
* @s2: An input base address
* @a: left index
* @b: special index
* Return: 1 if s is palindrome, otherwisw 0
*/

int str_checker(char *s1, char *s2, int a, int b)
{
if (s1[a] == '\0' && s2[b] == '\0')
return (1);
if (s1[a] == s2[b])
return (str_checker(s1, s2, a + 1, b + 1));
if (s1[a] == '\0' && s2[b] == '*')
return (str_checker(s1, s2, a, b + 1));
if (s2[b] == '*')
return (str_checker(s1, s2, a + 1, b) || str_checker(s1, s2, a, b + 1));
return (0);
}

/**
* wildcmp - a function that compares strings
* @s1: An input address for string
* @s2: An input address for string
* Return: 1 if they are identical
*/

int wildcmp(char *s1, char *s2)
{
return (str_checker(s1, s2, 0, 0));
}
