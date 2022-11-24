#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - a function that returns the length of a string
* @s: character
* Return: value is i
*/

int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
* add_node - a function that adds a new node
* @head: head of a list
* @str: value to insert
* Return: number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *add;
add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
add->str = strdup(str);
add->len = _strlen(str);
add->next = *head;
*head = add;
return (add);
}
