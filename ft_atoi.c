/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:44:07 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/21 18:02:51 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	res;
	int		sign;

	sign = 1;
	res = 0;
	while (*str && ft_isspace(*str))
		++str;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = (size_t)(res * 10 + (*str - 48));
		++str;
		if (res > 9223372036854775807 && (sign == 1))
			return (-1);
		if (res > 9223372036854775807 && (sign == -1))
			return (0);
	}
	return ((int)(res * sign));
}
