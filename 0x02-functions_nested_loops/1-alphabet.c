#include "main.h"
//prints the alphabet in lower case

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