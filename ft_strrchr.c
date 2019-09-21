/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:28:54 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/10 22:30:43 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_pos;

	last_pos = (0);
	while (*str)
	{
		if (*str == c)
			last_pos = (char*)str;
		str++;
	}
	if (last_pos)
		return (last_pos);
	if (c == '\0')
		return ((char*)str);
	return (0);
}
