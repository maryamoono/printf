#ifndef _MAIN_H
#define _MAIN_H
<<<<<<< HEAD
#define BUFF_SIZE 1024
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdbool.h>
int _printf(const char *format, ...);
int _putchar(char n);
int _puts(char *str);
#endif

=======

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
unsigned int _print_str(char *str);
int handle_casses(const char *format, va_list lol);
#endif
>>>>>>> parent of 0e429e9... update

