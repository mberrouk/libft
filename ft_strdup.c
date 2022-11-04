/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:08:58 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/01 23:16:55 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*s;

	size = ft_strlen(s1) + 1;
	s = (char *)malloc(sizeof(char) * size);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, size);
	return (s);
}
