#include "main.h"
/**
 * _printf - that function that used to print string or format string
 * @format: its refers to letters thar used with strings
 * Return: the same integer
 */
int _printf(const char *format, ...)
{
	unsigned int m, s_coont, coont = 0;
	va_list lol;

	va_start(lol, format);
	for (m = 0; format && format[m] != '\0'; m++)
	{
		if (format[m] != '%')
		{
			putchar(format[m]);
		}
		else if (format[m] == '%' && format[m + 1] == 'c')
		{
			putchar(va_arg(lol, int));
		}
		else if (format[m + 1] == 's')
		{
			s_coont = puts(va_arg(lol, char *));
			coont += (s_coont - 1);
			m++;
		}
		else if (format[m + 1] == '%')
		{
			putchar('%');
		}
		coont += 1;
	}
	va_end(lol);
	return (coont);
}
