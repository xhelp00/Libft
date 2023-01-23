/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:39:39 by phelebra          #+#    #+#             */
/*   Updated: 2023/01/20 22:09:02 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_freememory(char **new, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free (new[i]);
		i++;
	}
	free (new);
	return (NULL);
}

static size_t	ft_countwords(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_wordlen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**ft_fill(char **new, const char *str, char c, size_t count)
{
	size_t	words;
	size_t	len;
	size_t	i;

	i = 0;
	words = 0;
	while (words < count)
	{
		while (str[i] == c)
			i++;
		len = ft_wordlen(&str[i], c);
		new[words] = ft_substr(str, i, len);
		if (!new[words])
			return (ft_freememory(new, words));
		while (str[i] && str[i] != c)
			i++;
		words++;
	}
	new[words] = NULL;
	return (new);
}

char	**ft_split(const char *str, char c)
{
	size_t	count;
	char	**new;

	if (!str)
		return (NULL);
	count = ft_countwords(str, c);
	new = malloc ((count + 1) * sizeof(char **));
	if (!new)
		return (NULL);
	return (ft_fill(new, str, c, count));
}
