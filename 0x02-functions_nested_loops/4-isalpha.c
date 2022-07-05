#include "main.h"

/**
*_isalpha - checks if character is alphabet or not
*@c: type int char
*Return: 1 if letter, lowercase or uppercase
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
{
return (1);
}
else
{
return (0);
}
}
