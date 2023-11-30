#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - that prints anything.
  * @*: pointers
  * @format: list of types of arguments.
  * Return: Nothing.
  */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list arg;
	char *str;

	va_start(arg, format);

	while (format != NULL)
	{
		printf("%c", va_arg(arg, int));
		printf("%i", va_arg(arg, int));
		printf("%.1f", va_arg(arg, double));
	}
	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);

	if (format[i + 1])
	{
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
