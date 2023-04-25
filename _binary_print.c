#include "main.h"
/**
 * print_binary - prints an unsigned integer to standard output in binary form
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_binary(va_list args, int count)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int mask = 1 << ((sizeof(unsigned int) * 8) - 1);

	while (mask > 0)
	{
		if (num & mask)
			write_char('1');
		else
			write_char('0');
		count++;
		mask >>= 1;
	}
	return (count);
}
