#include "libft.h"

char *ft_strnew(size_t size)
{
    char *str;
    size_t i;
    
    i = 0;
    str = ft_memalloc(size + 1);
    if (str == 0)
        return (0);
    while (i < size)
    {
        str[i] = '\0';
        i++;
    }
    return (str);
}