#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned int    i;
    unsigned char *ptr;
    unsigned char *ptr2;
    unsigned int    k;

    i = 0;
    ptr = (unsigned char*)dest;
    ptr2 = (unsigned char*)src;
    while (i < n)
    {
        ptr[i] = ptr2[i];
        if (ptr[i] == (unsigned char)c)
            {
                k = i;
                i = 0;
                while (i++ <= k)
                    dest++;
                return ((void*)dest);
            }
        i++;        
    } 
    return (NULL);    
}