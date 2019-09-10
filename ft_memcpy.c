#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int i;
    unsigned char *ptr;
    unsigned char *ptr2;

    i = 0;
    ptr = (unsigned char*)dest;
    ptr2 = (unsigned char*)src;
    while (i < n)
    {
        ptr[i] = ptr2[i];
        i++;        
    }  
    return (dest);
}