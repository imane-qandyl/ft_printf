#ifndef FT_PRINTF_H //"if not defined". It checks whether a macro has not been defined.
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_characters(int c);
int		ft_print_unsigned_digit(unsigned int num);
int		ft_printdigit(int num);
int		ft_printhex(unsigned long num, char hex_case);
int		ft_printpointer(void *ptr);
int		ft_printstring(char *str);
// int		ft_formatspecifier(va_list list, const char str);
int		ft_printf(const char *str, ...);
char	*ft_strchr(const char *s, int c);

#endif