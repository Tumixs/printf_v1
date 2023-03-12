#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
char *base_converter(int num, int base_n);
int arrayprinter(char *array);
int format_printer(const char *, int *, va_list arg);

#endif
