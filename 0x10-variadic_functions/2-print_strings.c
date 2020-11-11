#include "variadic_functions.h"
/**
 *print_strings - prints strings given
 *@separator: separator
 *@n: number of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *a;

	if (n > 0)
	{
		va_start(ap, n);
		printf("%s", va_arg(ap, char *));
		if (separator == NULL)
		{
			for (i = 1; i < n; i++)
			{
				a = va_arg(ap, char *);
				if (a == NULL)
				{
					printf("(nil)");
				}
				else
				{
				printf("%s", a);
				}
			}
		}
		else
		{
			for (i = 1; i < n; i++)
			{
				a = va_arg(ap, char *);
				if (a == NULL)
				{
					printf("%s(nil)", separator);
				}
				else
				{
				printf("%s%s", separator, a);
				}
			}
		}
	}
	putchar('\n');
}
