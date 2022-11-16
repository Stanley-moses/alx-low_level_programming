#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - a function that adds integers
* @a: integer input
* @b: integer input
* Return: ...
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - a function that subtracts integers
* @a: integer input
* @b: nteger input
* Return: ...
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - a function that multiplies integers
* @a: input integer
* @b: input integer
* Return: ...
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - a function that divides integers
* @a: input integer
* @b: input integer
* Return: ...
*/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - a function that returns modulo
* @a: input integer
* @b: input integer
* Return: ...
*/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
