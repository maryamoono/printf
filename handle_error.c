#include "main.h"
/**
 * handle_casses - dawdwd
 * @format: adw
 * @lol: dwadwa
 * Return: nothing
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
