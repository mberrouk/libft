/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:55:02 by mberrouk          #+#    #+#             */
/*   Updated: 2022/10/21 21:06:46 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;

	len_s = ft_strlen((char *)s) - 1;
	if ((char)c == '\0')
		return (&((char *)s)[len_s + 1]);
	while (len_s >= 0)
	{
		if (s[len_s] == (char)c)
			return ((char *)s + len_s);
		len_s--;
	}
	return (NULL);
}
