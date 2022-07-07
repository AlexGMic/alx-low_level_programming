#include "main.h"
#include <stdio.h>
/**
 * main - prints 1 through 100 and replace 3 by Fizz and 5 by Buzz
 *
 * Return: Always 0
 */

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

}
	putchar('\n');
	return (0);

}
