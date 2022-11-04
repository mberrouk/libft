/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:05:44 by mberrouk          #+#    #+#             */
/*   Updated: 2022/10/17 22:07:26 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (i < n - 1)
	{
		if ((((unsigned char *)s1)[i] != ((unsigned char *)s2)[i]))
			break ;
		else
			i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
