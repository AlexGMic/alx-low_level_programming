#include "main.h"

/**
*Checks for lower case letters
*/

int _islower(int c)
{
if(97<= c <= 122)
{
return (1);
}
return (0);
}

int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}