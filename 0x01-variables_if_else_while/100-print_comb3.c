#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int num, num1;

for (num = '0' ; num <= '9' ; num++)
{
for (num1 = '0' ; num1 <= '9' ; num1++)
{
if (num == num1)
{}
else if (num > num1)
{}
else
{
putchar(num);
putchar(num1);
if (num == '8' && num1 == '9')
{}
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
