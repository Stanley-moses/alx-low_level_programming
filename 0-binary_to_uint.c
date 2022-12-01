#include "main.h"

/**
* binary_to_uint - a function that converts binary to unsigned integer
* @b: pointer to a string of 0 and 1 char
* Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int y;
y = 0;
if (!b)
return (0);
for (x = 0; b[x] != '\0'; x++)
{
if (b[x] != '0' && b[x] != '1')
return (0);
}
for (x = 0; b[x] != '\0'; x++)
{
y <<= 1;
if (b[x] == '1')
y += 1;
}
return (y);
}
