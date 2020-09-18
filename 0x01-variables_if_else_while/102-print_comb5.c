#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int num, num1, num2, num3;

for (num = '0'; num <= '9'; num++)
{
for (num1 = '0'; num1 <= '9'; num1++)
{
for (num2 = '0'; num2 <= '9'; num2++)
{
for (num3 = '0'; num3 <= '9'; num3++)
{
if (num < num2 || (num == num2 && num1 < num3))
{
putchar(num);
putchar(num1);
putchar(' ');
putchar(num2);
putchar(num3);
if (num != '9' || num1 != '8' || num2 != '9' || num3 != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');

return (0);
}
