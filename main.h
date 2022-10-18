#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
char *base_converter(int num, int base_n);
int arrayprinter(char *array);
int format_printer(char j, va_list arg);

#endif
