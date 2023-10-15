#include "main.h"
/**
 * _puts - hbgn
 * @str: jkde
 * Return: hbe
 */
int _puts(char *str)
{
	int m = 0, v = 0, h;
	char *y = "(NULL)";

	if (!str)
	{
		for (h = 0 ; h < 6 ; h++)
			putchar(y[h]);
		return (h);
	}
	while (str[m] != '\0')
	{
		putchar(str[m]);
		v++;
		m++;
	}
	return (v);
}
