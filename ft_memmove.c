#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned int i;
    unsigned char *ptr;
    unsigned char *ptr2;
    unsigned char *temp;

    i = 0;
    temp = malloc(sizeof(unsigned char)*(n + 1));
    if (temp == NULL)
        return NULL;
    ptr = (unsigned char*)dest;
    ptr2 = (unsigned char*)src;
    while (i < n)
        {
            temp[i] = ptr2[i];
            i++;        
        }
    i = 0;
    while (i < n)
        {
            ptr[i] = temp[i];
            i++;        
        }
    free(temp);
    return (dest);
}