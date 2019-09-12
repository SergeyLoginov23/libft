
#include "libft.h"

size_t ft_lspacecount(char const *s)
{
    size_t i;
    size_t k;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    i = i - 1;
    k = i;    
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
    {
        i--;
    }
    return (k - i);    
}

