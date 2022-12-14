#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_all - a function that prints all
* @format: specifies necessary operation
* Return: void
*/

void print_all(const char * const format, ...)
{
int i = 0;
char *str;
va_list ap;
va_start(ap, format);
while (format == NULL)
{
printf("\n");
return;
}
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", (float) va_arg(ap, double));
break;
case 's':
str = va_arg(ap, char*);
if (str != NULL)
{
printf("%s", str);
break;
}
printf("(nil)");
break;
}
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
|| format[i] == 's') && format[(i + 1)] != '\0')
printf(", ");
i++;
}
va_end(ap);
printf("\n");
}
