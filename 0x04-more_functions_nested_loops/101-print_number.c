#include "holberton.h"
/**
 *print_number - alalalal
 *@n:akakakka
 */
void print_number(int n)
{
int a, b, c;
if (n < 0)
{
n = n * -1;
_putchar('-');
}
if (n >= 1000)
{
a = n / 1000;
b = n / 100;
b = b % 10;
c = n / 10;
c = c % 10;
n = n % 10;
_putchar('0' + a);
_putchar('0' + b);
_putchar('0' + c);
_putchar('0' + n);
}
else if (n >= 100)
{
a = n / 100;
b = n / 10;
b = b % 10;
n = n % 10;
_putchar('0' + a);
_putchar('0' + b);
_putchar('0' + n);
}
else if (n >= 10)
{
a = n / 10;
n = n % 10;
_putchar('0' + a);
_putchar('0' + n);
}
else
{
_putchar('0' + n);
}
}
