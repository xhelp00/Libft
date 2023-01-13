/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:06:34 by phelebra          #+#    #+#             */
/*   Updated: 2023/01/13 14:01:31 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while ((((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
	&& ((unsigned char *)s1)[i] != 0 && i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
