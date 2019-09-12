
#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}