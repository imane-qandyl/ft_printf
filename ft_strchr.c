#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
    size_t i;
    i = 0;
    while(s[i])
    {
        if (s[i] == (char )c)
            return ((char *)&s[i]);
        i++;
    }
    if ((char)c == '\0')
    {
        return ((char *)&s[i]);
    }
	return (NULL);
}
// int main()
// {
//     printf("%s",ft_strchr("imane",'\0'));
// }