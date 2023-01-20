/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:39:39 by phelebra          #+#    #+#             */
/*   Updated: 2023/01/20 17:42:44 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	wordcount;
	int	i;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			wordcount++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (wordcount);
}

static void	ft_fill(char **space, char const *s, char c)
{
	char		**space1;
	char const	*tmp;

	tmp = s;
	space1 = space;
	while (*tmp)
	{
		while (*s == c)
			++s;
		tmp = s;
		while (*tmp && *tmp != c)
			++tmp;
		if (*tmp == c || tmp > s)
		{
			*space1 = ft_substr(s, 0, tmp - s);
			s = tmp;
			++space1;
		}
	}
	*space1 = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		len;

	if (!s)
		return (NULL);
	len = ft_wordcount(s, c);
	ptr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_fill(ptr, s, c);
	return (ptr);
}
