#include "main.h"
/**
 *handle_format - This is the entry point of the code
 *@args: ujrhfneu
 *@format: ijhfun
 *Return:0 Success
 */
int handle_format(const char *format, va_list args)
{
	unsigned int h = 0, count = 0;
	int r_val, num;

	for (; format[h] != '\0'; h++)
	{
		if (format[h] != '%')
			_putchar(format[h]);
		else if (format[h + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			h++; }
		else if (format[h + 1] == 's')
		{
			r_val = _print_str(va_arg(args, char *));
			h++;
			count += (r_val - 1); }
		else if (format[h + 1] == 'b')
		{
			count += (_printBinary(va_arg(args, unsigned int))) - 1;
			h++; }
		else if (format[h + 1] == 'd' || format[h + 1] == 'i')
		{
			num = va_arg(args, int);
			r_val = _print_str(get_int(num));
			count += (r_val - 1);
			h++; }
		else if (format[h + 1] == '%')
		{
			_putchar('%');
			h++; }
		else
			_putchar('%');
		count += 1;
	}
	return (count);
}
