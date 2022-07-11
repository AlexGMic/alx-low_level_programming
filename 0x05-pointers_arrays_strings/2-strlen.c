#include "main.h"
/**
*_strlen - counts the length of a string.
*@s: character pointer.
*
*Return: returns an int type length of a string.
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
s++;
length++;
}
return (length);
}
