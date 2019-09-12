
#include "libft.h"

char *ft_strtrim(char const *s)
{
    size_t len;
    size_t j;
    size_t k;
    char *str;
    
    len = ft_strlen((char*)s);
    k = ft_fspacecount(s);
    j = ft_lspacecount(s);
    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;
    if (len > k)
        len = len - k - j;
    else 
        len = len - k;
    str = malloc(sizeof(char)*(len + 1));
    if (str == NULL)
        return (NULL);
    str = ft_strncpy(str, (char*)s, len);
    return(str);
}