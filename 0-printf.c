#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - a function that produces output to stdout
 * @format: a character string input
 * ... - other arguments to the function
 * Return: the number of characters printed
 */
int _printf(const char *format,...)
{
	va_list ap;
	int i = 0, j = 0;
	char *str_arg, *buff;
	int len_format = 0;

	len_format = strlen(format);
	buff = (char*)malloc(len_format * sizeof(char));
	va_start(ap, format);
	while(format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					buff[j] = (char)va_arg(ap,int);
					j++;
					break;
				case 's':
					str_arg = va_arg(ap, char*);
					strcpy(&buff[j], str_arg);
					j += strlen(str_arg);
					break;
				case '%':
					buff[j] = '%';
					j++;
					break;
				default:
					printf("Default");
			}
		}
		else
		{
			buff[j] = format[i];
			j++;
		}
		i++;
	}
	fwrite(buff, j, 1, stdout);
	va_end(ap);
	return j;
}
