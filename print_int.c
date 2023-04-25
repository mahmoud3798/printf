#include "main.h"

/**
 * print_int - prints integers.
 * @args: the argument list
 * @count: the digit count
 *
 * Return: count.
 */

int print_int(va_list args, int count)
{
	int n = va_arg(args, int);
	int l = 0, i = 0, j, num = n;
	char number[11];


	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (num != 0)
	{
		num /= 10;
		l++;
	}
	num = n;
	while (num != 0)
	{
		number[i] = (num % 10) + '0';
		i++;
		num /= 10;
	}
	for (j = l; j >= 0; j--)
	{
		_putchar(number[j]);
	}
	return (l);
}
