#include "main.h"

/**
 * print_int - prints integers.
 * @list: list of inputs.
 *
 * Return: (n_length) length of charcters printed.
 */

int print_int(va_list list)
{
	int n_length;

	n_length = print_n(list);
	return (n_length);
}

/**
 * print_n - takes the list and prints it.
 * @args: the arguments.
 *
 * Return: len of the printed
 */

int print_n(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	for (; num / div > 9; )
	{
		div *= 10;
	}
	for (; div != 0; )
	{
		len += _putchar ('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
