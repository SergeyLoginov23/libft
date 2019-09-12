#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *str;
    unsigned int i;
        
    i = 0;
    str = ft_memalloc(len + 1);
    if (str == 0)
        return (0);
    while (i++ < start)
        s++;    
    str = ft_strncpy(str, (char*)s, len);
	return (str);
}
