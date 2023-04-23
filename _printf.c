#include "main.h"

/**
* print_char - Helper function to print a single character
* @c: char variable
* Return: the number of characters printed (always 1)
*/
static int print_char(char c)
{
	putchar(c);
	return (1);
}
/**
* print_string - Helper function to print a null-terminated string
* @s: pointer
* Return:the number of characters printed
*/
static int print_string(char *s)
{
	int count = 0;

	while (*s)
	{
		putchar(*s++);
		count++;
	}
	count++;
	return (count);
}
/**
* _printf - function that handles format strings with %c, %s, and %%
* @format: char pointer
* @...: pointer
* Return: integer
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);

				count += print_char(c);
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				count += print_string(s);
			}
			else if (*format == '%')
			{
				count += print_char('%');
			}
		}
		else
			count += print_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}

