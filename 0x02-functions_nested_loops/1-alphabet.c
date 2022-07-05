#include "main.h"
/**
*Prints alphabet
*/

void print_alphabet()
{
for(char i='a'; i<='z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}