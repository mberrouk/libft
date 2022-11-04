/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:08:07 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/04 21:23:54 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (!(needle[i]))
		return ((char *)haystack);
	while (i < len && (haystack)[i])
	{
		y = 0;
		while (needle[y] && haystack[i + y] && haystack[i + y] == needle[y])
		{
			if (needle[y + 1] == '\0' && y + i < len)
				return (&((char *)haystack)[i]);
			y++;
		}
		i++;
	}
	return (NULL);
}
