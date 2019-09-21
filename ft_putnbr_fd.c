/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:51:32 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/16 20:51:47 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			b;
	unsigned int	nb;

	if (n < 0)
	{
		nb = (unsigned int)(n * -1);
		ft_putchar_fd('-', fd);
	}
	else
		nb = (unsigned int)n;
	if (nb / 10 > 0)
	{
		ft_putnbr_fd(nb / 10, fd);
		b = nb % 10 + 48;
		ft_putchar_fd(b, fd);
	}
	else
	{
		b = nb % 10 + 48;
		ft_putchar_fd(b, fd);
	}
}
