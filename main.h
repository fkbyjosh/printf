#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_integer_twice(va_list args, int *count);
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
#endif
