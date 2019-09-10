#include "libft.h"

void *ft_bzero(void *dest, size_t n)
{
    unsigned int i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char*)dest;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;        
    }  
    return (dest);
}