/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:15:35 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/10 22:17:46 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*ptr;

	i = 0;
	if (!f || !s)
		return (0);
	while (s[i] != '\0')
		i++;
	str = ft_memalloc(i + 1);
	if (str == 0)
		return (0);
	ptr = str;
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, (char)(s[i]));
		i++;
	}
	return (ptr);
}
