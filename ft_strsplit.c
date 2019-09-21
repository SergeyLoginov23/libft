/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancin <jfrancin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:24:26 by jfrancin          #+#    #+#             */
/*   Updated: 2019/09/21 17:55:34 by jfrancin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cw(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((i == 0) && (s[i] != c))
		{
			count++;
			i++;
		}
		else if ((s[i] != c) && (s[i - 1] == c))
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

static int	nextword(char *s, int i, char c)
{
	while (s[i] != '\0' && (s[i] != c))
	{
		i++;
	}
	return (i);
}

static char	*wordcpy(char *s, int i, char c)
{
	int		j;
	int		k;
	char	*word;

	k = nextword(s, i, c);
	j = 0;
	word = malloc(sizeof(char) * (k - i + 1));
	if (!word)
		return (NULL);
	while (s[i] != '\0' && (s[i] != c))
	{
		word[j] = s[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**strnew;

	j = 0;
	i = 0;
	if (!s || !c || !(strnew = malloc(sizeof(char*) * (cw((char*)s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if ((i == 0) && (s[i] != c))
		{
			strnew[j] = wordcpy((char*)s, i, c);
			j++;
		}
		else if ((s[i] != c) && (s[i - 1] == c))
		{
			strnew[j] = wordcpy((char*)s, i, c);
			j++;
		}
		i++;
	}
	strnew[j] = 0;
	return (strnew);
}
