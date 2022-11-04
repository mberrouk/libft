/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:48:20 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/01 23:59:14 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ii;
	size_t	size;
	char	*s;

	i = 0;
	ii = i;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = (char *)malloc(sizeof(char) * size);
	if (!s)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	while (ii < ft_strlen(s2))
	{
		s[i + ii] = s2[ii];
		ii++;
	}
	s[i + ii] = '\0';
	return (s);
}
