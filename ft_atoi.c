/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:07:06 by phelebra          #+#    #+#             */
/*   Updated: 2023/01/10 17:07:10 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int base;
	int sign;

	i = 0;
	base = 0;
	sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
	i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		base = base *10 + (str[i] - '0');
		i++;
	}
	return (base * sign);
}
