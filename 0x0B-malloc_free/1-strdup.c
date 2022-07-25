#include "main.h"
#include <stdlib.h>
/**
*_strdup - returns the duplicate of the input string.
*@str: character pointer.
*
*Return: returns a character pointer.
*/
char *_strdup(char *str)
{
unsigned int size, i;
char *ptr;
size = 0;
if (str == NULL)
{
return (NULL);
}
while (str[size] != '\0')
{
size++;
}
ptr = (char *)malloc(sizeof(char) * (size + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = str[i];
}
return (ptr);
}
