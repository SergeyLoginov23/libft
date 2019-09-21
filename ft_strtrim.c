/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:09:08 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/21 18:02:31 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_fspacecount(char const *s)
{
	size_t i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	return (i);
}

static size_t	ft_lspacecount(char const *s)
{
	size_t i;
	size_t k;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	k = i;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
	}
	return (k - i);
}

char			*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	j;
	size_t	k;
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen((char*)s);
	k = ft_fspacecount(s);
	j = ft_lspacecount(s);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (len > k)
		len = len - k - j;
	else
		len = len - k;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (len-- > 0)
		str[i++] = *s++;
	str[i] = '\0';
	return (str);
}
