/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:04:23 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/21 15:19:29 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (!s1 || !s2)
		return (0);
	str = ft_memalloc((ft_strlen(s1) + ft_strlen(s2)));
	if (str == 0)
		return (0);
	if (s1)
		str = ft_strcpy(str, (char*)s1);
	else
		str = ft_strcpy(str, (char*)s2);
	if (s1 && s2)
		str = ft_strcat(str, (char*)s2);
	return (str);
}
