#include "main.h"

/**
*_islower - prints 1 or 0  based on input
*
*Return: Always (0)
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
