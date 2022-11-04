/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:42:47 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/03 23:14:54 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	size_s;
	size_t	size_d;
	size_t	i;
	size_t	y;

	y = 0;
	size_s = ft_strlen(src);
	if (dstsize == 0)
		return (size_s);
	size_d = ft_strlen(dest);
	if (size_d >= dstsize)
		return (dstsize + size_s);
	i = size_d;
	while (src[y] && i < (dstsize - 1))
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (size_d + size_s);
}
