#include "main.h"
/**
* _abs - converts a negative number to positive using an absoulte value
*@n: int type number
*Return - converted number
*/

int _abs(int i)
{
if (i < 0)
{
i = i * -1;
}
else
{
i = i;
}
return (i);
}
