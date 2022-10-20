<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

=======
#ifdef MAIN_H
#define MAIN_H
>>>>>>> 0433b8269aff7d79619c948904a05ea0f0f79ed0
int _printf(const char *format, ...);

#endif

