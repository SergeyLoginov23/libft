
#include "libft.h"

char *ft_strmap(char const *s, char(*f)(char))
{
    unsigned int i;
    char *str;
    char *ptr;

    i = 0;
    if (!s || !f)
		return (0);  
    while (s[i] != '\0')
        i++;
    str = ft_memalloc(i + 1);
    if (str == 0)
        return (0);
    ptr = str;
    while (*s)
    {
       *(str++) = f((char)*(s++));
    }
        return(ptr);    
}