#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - a function that concatenates strings
* @s1: first string
* @s2: second string
* Return: a pointer to a newly allocated space
* NULL if failed
*/

char *str_concat(char *s1, char *s2)
{
int a, b, len1, len2, len;
char *outcome;
len1 = len2 = 0;
if (s1 != NULL)
{
a = 0;
while (s1[a++] != '\0')
len1++;
}
if (s2 != NULL)
{
a = 0;
while (s2[a++] != '\0')
len2++;
}
len = len1 + len2;
outcome = (char *)malloc(sizeof(char) * (len + 1));
if (outcome == NULL)
return (NULL);
for (a = 0; a < len1; a++)
outcome[a] = s1[a];
for (b = 0; b < len2; b++, a++)
outcome[a] = s2[b];
outcome[len] = '\0';
return (outcome);
}
