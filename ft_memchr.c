/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:13:33 by jhansen           #+#    #+#             */
/*   Updated: 2019/06/10 13:22:58 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*string;

	i = 0;
	string = s;
	if (c == '\0')
		return ((void *)string + ft_strlen(string));
	while (string[i] != '\0' && (size_t)i < n)
	{
		if (string[i] == c)
			return ((void *)string + i);
		else
			i++;
	}
	return (NULL);
}
