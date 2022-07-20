#include "main.h"
/**
 * check - detects if a number is a prime number.
 * @n: integer number.
 * @i: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int check(int n, int i)
{
if (n % i == 0)
{
if (n == i)
{
return (1);
}
else
{
return (0);
}
}
return (0 + check(n, i + 1));
}
/**
 * is_prime_number - detects if a number is a prime number.
 * @n: integer number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
if (n <= 0 || n == 1)
{
return (0);
}
return (check(n, 2));
}
