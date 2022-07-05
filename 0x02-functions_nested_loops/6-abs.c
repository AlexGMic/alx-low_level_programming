#include "main.h"
/**
*_abs - converts a negative number to positive using an absoulte value
*Return - converted number
*/

int_abs(int i)
{
if (i < 0)
{
i = i * -1;
}
else
{
i = i;
}
return i;
}
