#include "main.h"
/**
 * handle_casses - dawdwd
 * @format: adw
 * Return: nothing
 */
void handle_casses(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
	{
		va_end(args);
		return (-1);
	}
	if (!format[0])
	{
		va_end(args);
		return (0);
	}
}
