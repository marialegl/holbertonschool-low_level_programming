#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: variable de enteros positivos.
 * @...: argumentos
 *
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list argumentos;

	if (n == 0)
		return (0);
	va_start(argumentos, n);
	for (i = 0; i < n; ++i)
	{
		total += va_arg(argumentos, int);
	}
	va_end(argumentos);

	return (total);
}
