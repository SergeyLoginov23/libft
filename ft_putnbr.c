/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:52:10 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/16 20:54:57 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char			b;
	unsigned int	nb;

	if (n < 0)
	{
		nb = (unsigned int)(n * -1);
		ft_putchar('-');
	}
	else
		nb = (unsigned int)n;
	if (nb / 10 > 0)
	{
		ft_putnbr(nb / 10);
		b = nb % 10 + 48;
		ft_putchar(b);
	}
	else
	{
		b = nb % 10 + 48;
		ft_putchar(b);
	}
}
