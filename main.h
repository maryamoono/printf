#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
unsigned int _print_str(char *str);
int handle_casses(const char *format, va_list lol);
int print_integer(int value);
#endif

