#include "main.h"

/**
*Prints alphabet_x10
*/
void print_alphabet_x10(void)
{
for(int i=0; i<10; i++)
{
for(char j='a'; j<='z'; j++)
{
    _putchar(j);
}
_putchar('\n');
}
}

int main(void)
{
    print_alphabet_x10();
    return (0);
}