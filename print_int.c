#include "main.h"
int count_digit(int i);


/**
 * print_int - prints integers.
 * @args: the argument list
 * @count: the digit count
 *
 * Return: count.
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int l = 0, i = 0, num = n;
	int j = count_digit(n);
	char number[j];


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
	for (; l >= 0; l--)
	{
		_putchar(number[l]);
	}
	return (j);
}


int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
