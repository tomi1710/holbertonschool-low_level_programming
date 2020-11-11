#include "variadic_functions.h"
/**
 *print_numbers - prints numbers given with a specific separator
 *@separator: separator given
 *@n:number of numbers given
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list ap;

	va_start(ap, n);

	printf("%i", va_arg(ap, int));

		 for (i = 1; i < n; i++)
			 printf("%s%i", separator, va_arg(ap, int));
		 printf("\n");

	va_end(ap);
}
