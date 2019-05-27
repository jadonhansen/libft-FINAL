/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:13:33 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/27 17:07:28 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*string;

	i = 0;
	string = s;
	while (string[i] != '\0' && (size_t)i < n)
	{
		if (string[i] == c)
			return ((void *)string + i);
		else
			i++;
	}
	return (NULL);
}
