#ifndef MAIN_H
#define MAIN_H

/* #define UINT_MAX 4294967295 */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
char *base_converter(long int num, int base_n);
int arrayprinter(char *array);
int format_printer(const char *, int *, va_list arg);

#endif
