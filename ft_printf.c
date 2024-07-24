//(...) indicates that the function accepts a variable number of arguments 
//va_list It's used to access the variable arguments passed to the function. 
#include "ft_printf.h"

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...) {
    va_list args;// variadic function
    va_start(args, format);
    int len = 0;
    const char *ptr;
    ptr = format;
    while(*ptr) 
    {
        if (*ptr == '%') {
            ++ptr;
            if (*ptr == '\0') break;
            const char *spec = ft_strchr("diuxXps%", *ptr);
            if(spec)
            {
                len += (*spec == 'd') ? ft_printdigit(va_arg(args, int))://If the condition is false, the next condition is evaluated:
                       (*spec == 'u') ? ft_print_unsigned_digit(va_arg(args, unsigned int)) :
                       (*spec == 'x' || *spec == 'X') ? ft_printhex(va_arg(args, unsigned long), *ptr) :
                       (*spec == 'p') ? ft_printpointer(va_arg(args, void *)) :
                       (*spec == 's') ?  ft_printstring(va_arg(args, char *)) :
                       (*spec == '%') ? ft_characters('%'): 0;
            }
        } 
        else 
        {
            len += write(1, ptr, 1);
        }
        ptr++;
    }

    va_end(args);
    return len;
}
int main()
{
    ft_printf("%d\n", ft_printf("%d", NULL));
    printf("%d\n", printf("%d", NULL));
    return 0;
}
