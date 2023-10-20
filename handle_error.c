#include "main.h"
/**
 * handle_errors - maryamandosam
 * @format: mrat
 * @lol: dosamath
 * Return: i dne leiaz
 */
int handle_errors(const char *format, va_list lol)
{
	if (!format || (format[0] == '%' && !format[1]))
	{
		va_end(lol);
		exit(98);
	}
	if (!format[0])
	{
		va_end(lol);
		exit(98);
	}
	return (0);
}
