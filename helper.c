#include "main.h"
/**
 * _print_str - used to print string
 * @str: its refers to string want to print
 * Return: printed string length
 */
unsigned int _print_str(char *str)
{
	unsigned int coont = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		coont++;
	}
	return (coont);
}

