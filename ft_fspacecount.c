
#include "libft.h"

size_t ft_fspacecount(char const *s)
{
    size_t i;
    size_t k;

    i = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
    {
        i++;
    }
    return (i);    
}
