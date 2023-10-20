#include "main.h"
/**
 *handle_format - maryamandosama
 *@args: maryamandosama
 *@format: maryamandosama
 *Return: vnhg
 */
int handle_format(const char *format, va_list args)
{
	unsigned int v = 0, coont = 0;
	int r_val, num;

	for (; format[v] != '\0'; v++)
	{
		if (format[v] != '%')
			_putchar(format[v]);
		else if (format[v + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			v++; }
		else if (format[v + 1] == 's')
		{
			r_val = _print_str(va_arg(args, char *));
			v++;
			coont += (r_val - 1); }
		else if (format[v + 1] == 'b')
		{
			coont += (_printBinary(va_arg(args, unsigned int))) - 1;
			v++; }
		else if (format[v + 1] == 'd' || format[v + 1] == 'i')
		{
			num = va_arg(args, int);
			r_val = _print_str(get_int(num));
			coont += (r_val - 1);
			v++; }
		else if (format[v + 1] == '%')
		{
			_putchar('%');
			v++; }
		else
			_putchar('%');
		coont += 1;
	}
	return (coont);
}
