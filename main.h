#ifndef MAIN_H
#define MAIN_H
/** include stdlibs **/
#include <stdlib.h>
#include <stdarg.h>

/** function prototypes**/
int _printf(const char *format, ...);
int _putchar(char c);
int get_flag(char s, flags_t *f);

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
