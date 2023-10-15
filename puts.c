#include "main.h"
/**
 * _puts - hvncbf dkvkd
 * @str: nvfkjkd
 * Return: nvhbv
 */
int _puts(char *str)
{
	int r = 0, v = 0, f;
	char *d = "NULL";

	if (!str)
	{
		for (f = 0 ; f < 6 ; f++)
			_putchar(d[f]);
		return (f);
	}
	while (str[r] != '\0')
	{
		_putchar(str[r]);
		v++;
		r++;
	}
	return (v);
}
