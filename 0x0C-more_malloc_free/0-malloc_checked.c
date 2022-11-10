#include "main.h"

/**
* malloc_checked - a function that causes normal process termination
* @b: allocated memory
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);
if (a == NULL)
exit(98);
return (a);
}
