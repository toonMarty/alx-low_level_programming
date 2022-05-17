#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: the format of data type to be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int counter = 0;
	char *s, *separator = "";
	va_list va;

	va_start(va, format);
	if (format)
	{
		while (format[counter])
		{
			switch (format[counter])
			{
				case 'c':
					printf("%s%c", separator, va_arg(va, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(va, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(va, double));
					break;
				case 's':
					s = va_arg(va, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					counter++;
					continue;
			}
			separator = ", ";
			counter++;
		}
	}
	printf("\n");
	va_end(va);
}

