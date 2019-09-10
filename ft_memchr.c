#include "libft.h"

void *ft_memchr (const void *src, int c, size_t n)
{
    unsigned int i;
    unsigned char *ptr;
    
    i = 0;
    ptr = (unsigned char*)src;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
        {
           return (&ptr[i]);
        }
        i++;        
    }  
    return (NULL);
}