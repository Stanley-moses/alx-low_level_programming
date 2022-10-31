#include "main.h"

/**
* _memset - a function that fills the n bytes of the memory area
* pointed to by s with a constatnt byte b
* @n: bytes of the memory area pointed to by s
* @s: with the constant byte b
* @b: memory area pointer
* Return: a pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;

while (a < n)
{
s[a] = b;
a++;
}

return (s);
}
