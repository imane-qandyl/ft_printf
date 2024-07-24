#include "ft_printf.h"

int		ft_printstring(char *str)
{
    int count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
    while(str[count])
    {
        ft_characters(str[count]);
        count++;
    }
        //write(1, "\n", 1);
    return (count);
}
// int main()
// {
//     printf ("%d",ft_printstring(NULL));
//     return (0);
// }
