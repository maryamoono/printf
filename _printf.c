#include "main.h"
/**
 * _printf - that function that used to print string or format string
 * @format: its refers to letters thar used with strings
 * Return: the same integer
 */
int _printf(const char *format, ...)
{
	unsigned int m, coont = 0;
	va_list lol;
	char *str;
	int num;

	va_start(lol, format);
	handle_casses(format, lol);
	for (m = 0; format && format[m] != '\0'; m++)
	{
		if (format[m] != '%')
			_putchar(format[m]);
		else if (format[m] == '%' && format[m + 1] == 'c')
		{
			_putchar(va_arg(lol, int));
			m++;
		}
		else if (format[m + 1] == 's')
		{
			str = va_arg(lol, char *);
			coont += _print_str(str) - 1;
			m++;
		}
		else if (format[m + 1] == 'd' || format[m + 1] == 'i')
		{
			num = va_arg(lol, int);
			coont += _print_str(get_int(num));
			m++;
		}
		else if (format[m + 1] == '%')
		{
			_putchar('%');
			m++;
		}
		else
			_putchar('%');
		coont += 1;
	}
	va_end(lol);
	return (coont);
}
