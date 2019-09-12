
#include "libft.h"

void ft_putendl(char const *s)
{
    while (*s)
    {
        ft_putchar((char) *s);
        s++;
    }
    ft_putchar('\n');
}