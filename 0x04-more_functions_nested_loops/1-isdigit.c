#include "main.h"
/**
*_isdigit - check if the given input is digit or not
*@c: int type to be checked
*
*Return: 1 if c is digit else returns 0 if not
*/
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
