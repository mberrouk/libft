/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:50:11 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/04 21:27:45 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_set(char s, char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (s == c[i])
			return (1);
		i++;
	}
	return (0);
}

static int	count_len(char const *s, char *e)
{
	int	len;

	len = 0;
	if (s == e)
		return (0);
	while (&s[len] != e)
		len++;
	return (len);
}

static char	*find_end(char const *s1, char *c)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	while ((find_set(s1[i], c) == 1 || !s1[i]) && i > 0)
		i--;
	return ((char *)s1 + (i + 1));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s1));
	while (find_set((char)s1[i], (char *)set) == 1)
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	size = count_len(((char *)s1 + i), find_end(s1, (char *)set));
	str = (char *)ft_calloc(sizeof(char), size + 1);
	if (!str)
		return (NULL);
	while (j < size)
	{
		str[j] = s1[i + j];
		j++;
	}
	return (str);
}
