/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:04:01 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/22 17:29:31 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countn(int n)
{
	int		i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		nd;
	int		j;

	i = 0;
	if (n < 0)
		i = 1;
	nd = ft_countn(n);
	ptr = malloc(sizeof(char) * (nd + i));
	if (ptr == 0)
		return (0);
	if (i == 1)
		ptr[0] = '-';
	j = nd + i - 1;
	ptr[j + 1] = '\0';
	while (j >= i)
	{
		if (i == 1)
			ptr[j--] = (n % 10 * -1) + '0';
		else
			ptr[j--] = n % 10 + '0';
		n = n / 10;
	}
	return (ptr);
}
