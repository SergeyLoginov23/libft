
#include "libft.h"

void *ft_memalloc(size_t size)
{
    void *str;
    
    str = malloc(size);
    if (str == 0)
        return (0);
    ft_bzero(str,size);
    return (str);        
}