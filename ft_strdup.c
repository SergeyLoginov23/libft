
#include "libft.h"

char *ft_strdup(char *src)
{
    char *dest;
    unsigned int i;

    i = 0;
    while (src[i] != '\0')
        i++;
    dest = malloc(sizeof(char)*(i+1));
    if (dest == 0)
        return (0);
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
