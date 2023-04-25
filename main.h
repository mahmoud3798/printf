#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args, int count);
int print_char(va_list args, int count);
int print_percent(int count);
int print_int(va_list args);
#endif
