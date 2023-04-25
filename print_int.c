#include "main.h"

/**
 * print_int - prints an integer to standard output
 * @args: the variable argument list
 * @count: the count of characters printed
 *
 * Return: The updated count of characters printed.
 */
int print_int(va_list args, int count)
{
  int n = va_arg(args, int);

  if (n < 0)
  {
    n = -n;
    _putchar('-');
    count++;
  }

  if (n / 10)
    count = print_int(args, count);

  _putchar(n % 10 + '0');
  count++;

  return (count);
}
