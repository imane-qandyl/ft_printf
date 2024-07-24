#include "ft_printf.h"

int	ft_printpointer(void *ptr)
{
    int len;
    len = 0;
    if (ptr == NULL)
    {
        len += write (1, "0x0", 3);
		return (len);
    }
    else 
    {
        len += write(1, "0x", 2);//hexadecimal format with the prefix "0x"
        len += ft_printhex((unsigned long)ptr, 'x');
        return len;
    }
}
// int main()
// {
//     int x = 0;
//     int *ptr = NULL;
//     ft_printpointer(ptr);
//     return 0;
// }