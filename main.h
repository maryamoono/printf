#ifndef _MAIN_H
#define _MAIN_H
#define BUFF_SIZE 1024
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>

int _putchar(char c);
int _printf(const char *format, ...);
unsigned int _print_str(char *str);
int handle_casses(const char *format, va_list lol);
char *get_int(int v);
#endif

