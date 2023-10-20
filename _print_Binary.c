#include "main.h"
/**
 *_printBinary - print waht acode
 *@num: uijn
 *Return: nvh
 */
int _printBinary(unsigned int num)
{
	char buffer[1024], pem;
	int index = 0;
	int m, digit;

	if (num == 0)
	{
		buffer[index++] = '0';
	}
	else
	{
		while (num > 0)
		{
			digit = num % 2;
			buffer[index++] = '0' + digit;
			num /= 2;
		}
	}
	if (index == 0)
	{
		buffer[index++] = '0';
	}
	for (m = 0; m < index / 2; m++)
	{
		pem = buffer[m];
		buffer[m] = buffer[index - 1 - m];
		buffer[index - 1 - m] = pem;
	}

	buffer[index] = '\0';
	return (_print_str(buffer));
}
