/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:45:39 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/16 19:55:19 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;
	unsigned char	*ptr2;
	unsigned int	k;

	i = 0;
	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		if (ptr[i] == (unsigned char)c)
		{
			k = i;
			i = 0;
			while (i++ <= k)
				dest++;
			return ((void*)dest);
		}
		i++;
	}
	return (NULL);
}
