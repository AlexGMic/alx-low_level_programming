#include "main.h"
#include <stdlib.h>
/**
*create_array - used to create array of chars.
*size: positive integer.
*c: is the first character to initialize the array.
*
*Return: returns character pointer.
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
ptr = (char *) malloc(size * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
