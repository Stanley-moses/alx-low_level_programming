#include "main.h"
#include <stdlin.h>

/**
* argstostr - a function that concatenates all arguments
* @ac: argument count
* @av: argument vector
* Return: a pointer to a new string, otherwise NULL
*/

char *argstostr(int ac, char **av)
{
char *str, *s;
int a, b, c, len = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
s = av[a];
b = 0;
while (s[b++])
len++;
len++;
}
str = (char *)malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
for (a = 0; b = 0; a < ac && b < len; a++)
{
s = av[a];
c = 0;
while (s[c])
{
str[b] = s[c];
c++;
b++;
}
str[b++] = '\n';
}
str[b] = '\0';
return (str);
}
