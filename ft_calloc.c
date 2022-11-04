/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:22:15 by mberrouk          #+#    #+#             */
/*   Updated: 2022/11/03 21:40:50 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	s = malloc(count * size);
	if (!s)
		return (NULL);
	ft_memset(s, 0, count * size);
	return (s);
}
