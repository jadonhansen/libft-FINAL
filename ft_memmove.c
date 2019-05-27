/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:38:39 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/27 17:15:24 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	int			x;
	char		*dest;
	const char	*source;

	i = 0;
	x = ((int)len - 1);
	dest = dst;
	source = src;
	if (dest == source && len > 0)
		return (NULL);
	if (source < dest)
	{
		while (x >= 0)
			dest[x--] = source[x--];
	}
	else
	{
		while (i < (int)len)
			dest[i++] = source[i++];
		dest[i] = '\0';
	}
	return (dest);
}
