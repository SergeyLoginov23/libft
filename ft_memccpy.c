#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned int    i;
    unsigned char *ptr;
    unsigned char *ptr2;

    i = 0;
    ptr = (unsigned char*)dest;
    ptr2 = (unsigned char*)src;
    while (i < n)
    {
        ptr[i] = ptr2[i];
        if (ptr[i] == (unsigned char)c)
            return (dest);
        i++;        
    } 
    return (NULL);
    
}