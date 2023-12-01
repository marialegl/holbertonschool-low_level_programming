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

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%i", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				printf("%s", str ? str : "(nil)");
				break;

			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
