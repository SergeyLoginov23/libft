
#include "libft.h"

void ft_putstr(char const *s)
{
    while (*s)
    {
        ft_putchar((char) *s);
        s++;
    }
}