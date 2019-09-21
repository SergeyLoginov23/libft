/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:35:16 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/10 22:41:36 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char *p;
	const char *c;

	if (*to_find == '\0')
		return ((char*)str);
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
