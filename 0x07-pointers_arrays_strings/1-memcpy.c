#include "main.h"
/**
*_memcpy - copies a memory location from the src pointer to the dest pointer.
*@dest: is the destination pointer.
*@src: is the source pointer.
*@n: is an unsigned integer.
*
*Return: returns pointer.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
