
#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char *p;
	const char *c;

    if (*to_find == '\0')
        return((char*)str);
	while (*str)
	{
		if (*str == *to_find)
		{
			c = str;
			p = to_find;
			while (*c++ == *p++)
			{
				if (*p == '\0')
					return ((char*)str);
				if (*c == '\0')
                    return ((char*)c);
            }
		}
		str++;
	}
	return (0);
}