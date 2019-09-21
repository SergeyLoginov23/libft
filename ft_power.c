/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:23:34 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/21 18:24:40 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power % 2)
		return ((long)nb * ft_power(nb, power - 1));
	else
		return ((long)ft_power(nb * nb, power / 2));
}
