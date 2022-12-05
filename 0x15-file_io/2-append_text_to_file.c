#include "main.h"

/**
* _strlen - a function that finds the lenghth of a string
* @str: pointer to the string
* Return: length of the string
*/

size_t _strlen(char *str)
{
size_t a;
for (a = 0; str[a]; a++)
;
return (a);
}

/**
* append_text_to_file - a function that appends text at the end of a file
* @filename: name of the file
* @text_content: NULL terminated string to add to the file
* Return: 1 on success, otherwise -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
int b;
ssize_t len;
if (filename == NULL)
return (-1);
b = open(filename, O_WRONLY | O_APPEND);
if (b == -1)
return (-1);
if (text_content != NULL)
len = write(b, text_content, _strlen(text_content));
close(b);
if (len == -1)
return (-1);
return (1);
}
