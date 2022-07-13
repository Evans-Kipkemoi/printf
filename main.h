#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

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

/*Main functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/* _printf */
int _printf(const char *format, ...);

/* write_char */
int _write_char(char c);
int _putchar(char c);

/* print_number */
int print_number(va_list args);
int print_unsgined_number(unsigned int n);



/* get_flag */
int get_flag(char s, flags_t *f);

/* print_address */
int print_address(va_list l, flags_t *f);

/* print_custom */
int print_bigS(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_rot13(va_list l, flags_t *f);

/* print_percent */
int print_percent(va_list l, flags_t *f);


/*Helper functions*/
iunsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

#endif
