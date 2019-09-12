
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    
    str = ft_memalloc((ft_strlen(s1) + ft_strlen(s2)));
    if (str == 0)
        return (0);
	if (s1)
		str = ft_strcpy(str, (char*)s1);
	else
		str = ft_strcpy(str, (char*)s2);
	if (s1 && s2)
		str = ft_strcat(str, (char*)s2);
	return (str);
}
