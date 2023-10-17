#include "main.h"
/**
 *printBinary - This is the point of the code
 *@num:l kjfv
 *Return:0 Sucess
 */
int printBinary(unsigned int num)
{
	char buffer[1024], temp;
	int index = 0;
	int i, digit;

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
	for (i = 0; i < index / 2; i++)
	{
		temp = buffer[i];
		buffer[i] = buffer[index - 1 - i];
		buffer[index - 1 - i] = temp;
	}

	buffer[index] = '\0';
	return (_print_str(buffer));
}
