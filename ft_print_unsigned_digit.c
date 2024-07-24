#include "ft_printf.h"

int ft_print_unsigned_digit(unsigned int num)
{
    unsigned int len;
    len = 0;
    if (num == 0)
    {
        ft_characters('0');
        return (1);
    }
    if (num > 9)
    {
        len += ft_print_unsigned_digit(num / 10);  //Since 123 > 9, we make a recursive call
    }
        
        ft_characters(num % 10 + '0');
        len++;
    return (len);
}
// int main(void)
// {
// 	printf("%u", ft_print_unsigned_digit(1234));
//     return (0);
// }