#include "main.h"

/**
* string_nconcat - a function that concatenates two strings
* @s1: first character
* @s2: second character
* @n: unsigned integer
* Return: NULL if the function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int a = 0, lens1 = 0, lens2 = 0;
if (s1 == NULL)
s1 = " ";
while (s1[lens1])
lens1++;
if (s2 == NULL)
s2 = " ";
while (s2[lens2])
lens2++;
if (n >= lens2)
n = lens2;
new_str = malloc(lens1 + n + 1);
if (new_str == NULL)
return (NULL);
for (; a < (lens1 + n); a++)
{
if (a < lens1)
new_str[a] = *s1, s1++;
else
new_str[a] = *s2, s2++;
}
new_str[a] = '\0';
return (new_str);
}
