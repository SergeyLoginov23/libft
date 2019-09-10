#include "libft.h"

void *ft_memset(void *dest, int c, size_t n)
{
    unsigned int i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char*)dest;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;        
    }  
    return (dest);
}