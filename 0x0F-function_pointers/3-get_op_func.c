#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
* get_op_func - a function that gets operators
* @s: string
* Return: a pointer to the function
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*". op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int a = 0;
while (a < 5)
{
if (*(ops[a].op) == *s && *(s + 1) == '\0')
return (ops[a].f);
a++;
}
return (NULL);
}
