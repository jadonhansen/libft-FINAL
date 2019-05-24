/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:05:00 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/23 13:53:40 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;
	int len;

	len = strlen(dst);
	i = 0;
	j = 0;
	while (src[j] != '\0' && (size_t)j < (dstsize - len - 1))
	{
		dst[len + j] = src[j];
		j++;
	}
	dst[len + j] = 0;
	return (len + j);
}