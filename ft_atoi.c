/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:18:31 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/03 17:43:23 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_convert(const char *s1, int sign)
{
	int				i;
	unsigned long	r;

	r = 0;
	i = 0;
	while (s1[i] >= 48 && s1[i] <= 57)
	{
		if (r > __LONG_MAX__)
			break ;
		r = r * 10 + (s1[i] - '0');
		i++;
	}
	if (r > __LONG_MAX__)
	{
		if (sign < 0)
			return (0);
		return (-1);
	}
	return (r * sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (ft_convert(&str[i], sign));
}
