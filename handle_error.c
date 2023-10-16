#include "main.h"
/**
 * handle_casses - dawdwd
 * @format: adw
 * @lol: dwadwa
 * Return: nothing
 */
int handle_casses(const char *format, va_list lol)
{
	if (!format || (format[0] == '%' && !format[1]))
	{
		va_end(lol);
		return (-1);
	}
	if (!format[0])
	{
		va_end(lol);
		return (0);
	}
	return (0);
}
