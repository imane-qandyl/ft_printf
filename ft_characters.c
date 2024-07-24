#include "ft_printf.h"

int		ft_characters(int c)
{
    write(1,&c,1);
    return(1);
}
// int main()
// {
//     char c = 'i';
//     ft_characters(c);
// }