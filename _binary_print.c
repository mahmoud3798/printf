#include "main.h"

/**
 * print_binary - converts an unsigned int argument to binary and
 *               prints it to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_binary(va_list args, int count)
{
	unsigned int n = va_arg(args, unsigned int);
	int binary[32], i = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (n > 0)
		{
			binary[i] = n % 2;
			n = n / 2;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(binary[i] + '0');
			count++;
			i--;
		}
	}
	return (count);
}
