/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:19:21 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/27 12:07:25 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	char *dest;
	const char *source;

	dest = dst;
	source = src;
	i = 0;
	while (n > 0)
	{
		if (source[i] == (char)c)
		{
			dest[i++] = (char)c;
			dest[i] = '\0';
			return (dest);
		}
		else
		{
			dest[i] = source[i];
			i++;
		}
		n--;
	}
	return (NULL);

}
