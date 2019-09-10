#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;
    unsigned char *ptr;
    unsigned char *ptr2;

    if (n == 0)
        return (0);
    i = 0;
    ptr = (unsigned char*)str1;
    ptr2 = (unsigned char*)str2;
    while (ptr[i] == ptr2[i] && i < n - 1)
        i++;
    return((int)ptr[i] - ptr2[i]);
}