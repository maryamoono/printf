#include "main.h"
/**
 * _printf - that function that used to print string or format string
 * @format: its refers to letters thar used with strings
 * Return: the same integer
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length;

	va_start(args, format);
	handle_errors(format, args);
	length = handle_format(format, args);
	va_end(args);
	return (length);

}
