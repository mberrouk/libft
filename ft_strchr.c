/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:45:21 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/03 22:37:05 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(s);
	if ((char)c == '\0')
		return (&((char *)s)[size]);
	if (c < 0)
		return (NULL);
	while (((char *)s)[i] != '\0')
	{
		if (((char *)s)[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
