#include "main.h"
/**
*_isupper - checks if the character is upper or lower
*@c: int type
*
*Return: 1 if the character is uppercase else returns 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
