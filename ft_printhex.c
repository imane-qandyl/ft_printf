#include "ft_printf.h"

int	ft_hex(unsigned int num, char hex_case)
{
	int	len;

	len = 0;
	if (num >= 0 && num <= 9)
		len += ft_characters(num + '0');
	else if (num >= 10 && num <= 15 && hex_case == 'x')
		len += ft_characters(num - 10 + 'a');
	else if (num >= 10 && num <= 15 && hex_case == 'X')
		len += ft_characters(num - 10 + 'A');
	return (len);
}
// 271
/*
271 /16 =ft_printhex(16);
16/ 16 =ft_printhex(1);
271 % 16 = ft_printhex(15);
16% 16 = ft_printhex(0);
10f
*/

int	ft_printhex(unsigned long num, char hex_case)
{
    int len;
    len = 0;
    if (num >= 16)
    {
        len += ft_printhex(num/16,hex_case);
        len += ft_printhex(num % 16,hex_case);
    }
    else
        len += ft_hex(num, hex_case);
	return (len);
}
// int main()
// {
//     printf("%d", printf("%s","hadra"));
// }

// 30 divise par 16 Le reste 14 est représenté par la lettre "E" dans la notation hexadécimale.
/*
Décimal | Hexadécimal
--------|------------
    0    |      0
    1    |      1
    2    |      2
    3    |      3
    4    |      4
    5    |      5
    6    |      6
    7    |      7
    8    |      8
    9    |      9
   10    |      A
   11    |      B
   12    |      C
   13    |      D
   14    |      E
   15    |      F
   */