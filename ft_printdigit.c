#include "ft_printf.h"

int		ft_printdigit(int num)
{
    int len;
    len = 0;

    if (num == -2147483648)
    {
        write(1,"-2147483648",11);
        return (11);
    }
    if (num < 0)
    {
        ft_characters('-');
        len++;
        num *= -1;
    }
    if (num > 9)
        len += ft_printdigit(num / 10);
        ft_characters(num % 10 + '0');
        len++;
    
    return len;
}
// int main(void)
// {
// 	printf("%d", ft_printdigit(123));
//     return (0);
// }