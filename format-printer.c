#include "main.h"

/**
 * format_printer - prints according to fromat specifier
 * @k: format specifier
 * @arg: array of arguments
 *
 * Description: ---
 * Return: returns the number of char printed
 */
int format_printer(char k, va_list arg)
{
	int counter = 0;
	int c;
	char *s;
	int i;
	int d;
	switch (k)
	{
		case 'c':
			c = va_arg(arg, int);
			_putchar(c);
			counter++;
			break;

		case 's':
			s = va_arg(arg, char *);
			while (*s != '\0')
			{
				_putchar(*s);
				s++;
				counter++;
			}

			break;
		case 'i':
			i = va_arg(arg, int);
			counter += arrayprinter(base_converter(i, 10));
			break;

		case 'd':
			d = va_arg(arg, int);
			counter += arrayprinter(base_converter(d, 10));
			break;

	}
	return (counter);
	
}
