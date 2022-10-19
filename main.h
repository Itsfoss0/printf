#ifndef MAIN_H
#define MAIN_H
/** include stdlibs **/
#include <stdlib.h>
#include <stdarg.h>

/** function prototypes**/
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);
int get_flag(char s, flags_t *f);
int (*get_print(char s))(va_list, flags_t *);
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);

char *convert(unsigned long int num, int base, int lowercase);
/**structures **/
/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
    int plus;
    int space;
    int hash;
} flags_t;

#endif
