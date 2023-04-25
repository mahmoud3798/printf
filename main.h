#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1


int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args, int count);
int print_char(va_list args, int count);
int print_percent(int count);
int print_int(va_list args);
int print_binary(va_list args, int count);
int print_n(va_list args);
int print_integer(va_list args, int count);
int print_number(int n);

#endif
