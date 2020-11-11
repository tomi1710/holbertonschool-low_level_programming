#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list ap;

	if (n > 0)
	{

		va_start(ap, n);

		printf("%s", va_arg(ap, char *));

		if (separator == NULL)
		{
			for (i = 1; i < n; i++)
				printf("%s", va_arg(ap, char *));
		}
		else
		{
			for (i = 1; i < n; i++)
				printf("%s%s", separator, va_arg(ap, char *));
		}
		va_end(ap);
	}
	putchar('\n');
}
