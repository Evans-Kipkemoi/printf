#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stderg.h>

/**
 * struct convert - defines a structure for symbols and functions.
 * @sym: The operator.
 * @f: function associated.
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*The functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ..);

#endif
