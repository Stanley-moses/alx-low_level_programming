#include "main.h"

/**
* set_bit - a function that sets the value of bit at a given index
* @n: pointer number
* @index: point to set bit
* Return: 1 0n success, otherwise -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
a = 1 << index;
*n = *n | a;
return (1);
}
