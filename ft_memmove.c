/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:54:51 by mberrouk          #+#    #+#             */
/*   Updated: 2022/10/31 21:12:34 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	tmp_dest = (char *) dest;
	tmp_src = (char *) src;
	if (tmp_dest < tmp_src)
		while (n--)
			*tmp_dest++ = *tmp_src++;
	else
	{
		tmp_src = (char *)src + (n - 1);
		tmp_dest = (char *)dest + (n - 1);
		while (n--)
			*tmp_dest-- = *tmp_src--;
	}
	return (dest);
}
