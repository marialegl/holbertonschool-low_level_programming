#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * print_all - that prints anything.
  * @*: pointers
  * @format: list of types of arguments.
  * Return: Nothing.
  */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0, c = 0;
	va_list arg;
	char *str;
	const char second_arg[] = "cifs";

	va_start(arg, format);

	while (format && format[i])
	{
		while (second_arg[j])
		{
			if (format[i] == second_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch(format[i])
		{
		case 'c': printf("%c", va_arg(arg, int)), c = 1; break;
		case 'i': printf("%i", va_arg(arg, int)), c = 1; break;
		case 'f': printf("%f", va_arg(arg, double)), c = 1; break;
		case 's': str = va_arg(arg, char *), c = 1;
			 if (str == NULL)
			 {
				 printf("(nil)");
			 } break;
		}
		i++;
		
	}
	printf("\n");
	va_end(arg);
}
