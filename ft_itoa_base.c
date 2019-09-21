/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:11:16 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/21 18:25:17 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long	check_min(int nbr, int *neg)
{
	if (nbr < 0)
	{
		*neg = 1;
		return ((long)nbr * -1);
	}
	else
		return ((long)nbr);
}

char			*ft_itoa_base(int nbr, int base)
{
	int		neg;
	int		len;
	long	nb;
	char	*res;

	len = 1;
	neg = 0;
	nb = check_min(nbr, &neg);
	while (ft_power(base, len) - 1 < nb)
		len++;
	if (!(res = (char*)malloc(sizeof(res) * (len + neg))))
		return (0);
	res[len + neg] = '\0';
	while (len-- > 0)
	{
		res[len + neg] = (nb % base) + (nb % base > 9 ? 'A' - 10 : '0');
		nb /= base;
	}
	if (neg)
		res[0] = '-';
	return (res);
}
