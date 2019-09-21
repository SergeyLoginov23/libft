/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:01:51 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/21 15:16:55 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (0);
	i = 0;
	str = ft_memalloc(len + 1);
	if (str == 0)
		return (0);
	while (i++ < start)
		s++;
	str = ft_strncpy(str, (char*)s, len);
	return (str);
}
