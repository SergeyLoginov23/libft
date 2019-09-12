
#include "libft.h"

void ft_putnbr(int n)
{
	char b;
    unsigned int nb;
    
	if (n < 0)
        {
            nb = (unsigned int)(n * -1);
            ft_putchar('-');
        }
    else
	    nb = (unsigned int)n;
    if (nb / 10 > 0)
		{
			ft_putnbr (nb/10);
			b = nb % 10 + 48;
			ft_putchar(b);
		}
	else
	{
		b = nb % 10 + 48;
		ft_putchar(b);
	}
}
