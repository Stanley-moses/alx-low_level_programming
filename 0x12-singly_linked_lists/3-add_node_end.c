#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - a function that finds the length of a string
* @str: string to find length
* Return: length of string
*/

unsigned int _strlen(char *str)
{
unsigned int a;
for (a = 0; str[a]; a++)
return (a);
}

/**
* add_node_end - a function that adds a node at the end
* @head: double pointer to a linked list
* @str: string to add
* Return: pointer to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _strlen(new->str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
