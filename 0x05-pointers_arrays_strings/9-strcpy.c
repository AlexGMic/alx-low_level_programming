#include "main.h"
/**
**_strcpy - copies a string and return the copied values.
*@dest: is the destination pointer.
*@src: is the source pointer.
*
*Return: returns a pointer as per specified in the function declaration.
*/
char *_strcpy(char *dest, char *src)
{
int i;
int length = 0;
while (src[length] != '\0')
{
length++;
}
for (i = 0; i < length; i++)
{
dest[i] = *(src + i);
}
dest[i] = '\0';
return (dest);
}
