#include "dog.h"
#include <stdlib.h>

/**
* new_dog - a function that creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int nl, ol, a;
dog_t *dog;
if (name == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (nl = 0; name[nl]; nl++)
;
nl++;
dog->name = malloc(nl *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (a = 0; a < nl; a++)
dog->name[a] = name[a];
dog->age = age;
for (ol = 0; owner[ol]; ol++)
;
ol++;
dog->owner = malloc(ol *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (a = 0; a < ol; a++)
dog->owner[a] = owner[a];
return (dog);
}
