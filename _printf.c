#include "main.h"

/**
 * _printf - writes output to standard output stream
 * @format: charcter string 
 *
 * Description:
 * Return: returns the number of characters printed,
 * excluding the null byte which ends output to strings
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int c;
	char *s;
	long int j;
	int counter = 0;

	va_start(arg, format);
	for (; *format != '\0'; format++)
	{
		while ( *format != '%') 
		{
			if (*format == '\0')
				return (counter);
			_putchar(*format);
			format++;
			counter++;
		}
		format++;
		switch (*format)
		{
			case 'c' :
				c = va_arg(arg, int);
				_putchar(c);
				counter++;
				break;

			case 's' :
				s = va_arg(arg, char *);
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
					counter++;
				}

				break;
			case 'i':
				j = va_arg(arg, long int);
				if (j < 0)
					_putchar('-');
				counter += arrayprinter(base_converter(j, 10));
				break;

			case 'd':
				j = va_arg(arg, long int);
				if (j < 0)
					_putchar('-');
				counter += arrayprinter(base_converter(j, 10));
				break;

		}
	}
	return (counter);
}

